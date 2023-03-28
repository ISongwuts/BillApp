# This Python file uses the following encoding: utf-8
import glob
import os
import sys

import sqlite3
import tempfile
import time
from PySide6.QtWidgets import QMainWindow, QTableWidget, QHeaderView, QSplashScreen, QMessageBox, QTableWidgetItem, QPushButton, QAbstractItemView, QHBoxLayout, QWidget, QApplication 
from PySide6.QtPrintSupport import QPrinter, QPrintPreviewDialog
from PySide6.QtCore import QDate, Qt,QBuffer, QIODevice, QSize, QPropertyAnimation, QEasingCurve
from PySide6.QtGui import QIcon, QDoubleValidator, QPixmap, QPainter, QImage
from countryList import CountryList
from ui_form import Ui_MainWindow
from ui_splashScreen import Ui_Form
from billGen import DocumentGenerator
from pdf2image import convert_from_path
from functools import lru_cache

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.initialize_ui_elements()
        self.connect_ui_elements()

    def initialize_ui_elements(self):
        self.setWindowIcon(QIcon('logo.ico'))
        self.setWindowTitle("Bill Builder")

        self.typePageSelector.addItem("Primary")
        self.typePageSelector.addItem("Secondary")

        self.dateEdit.setDate(QDate.currentDate())

        self.productDBTableHeight = self.productDBTable.height()
        self.customerTableHeight = self.customerTable.height()
        self.customerTable.blockSignals(True)
        self.productDBTable.blockSignals(True)

        self.sidebar_animation = QPropertyAnimation(self.SideBar, b"maximumWidth")
        self.sidebar_animation.setDuration(100)

        self.initialize_table(self.customerTable, ("ID", "Name", "Address", "Country", "Contact", "HaveBought", "History", "Action"), 300)
        self.initialize_table(self.productTable, ("Serial", "Name", "Quantity", "Price", "Action"))
        self.initialize_table(self.productDBTable, ("Serial", "Name", "Price", "Stock", "Action"))

        self.addItemToQcombo()
        self.TotalPrice = 0
        self.loadDataFromDB()

    def initialize_table(self, table:QTableWidget, header_labels, default_section_size=None):
        table.setHorizontalHeaderLabels(header_labels)
        table.resizeRowsToContents()
        table.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
        table.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        table.setShowGrid(False)

        if default_section_size:
            vertical_header = table.verticalHeader()
            vertical_header.setSectionResizeMode(QHeaderView.Fixed)
            vertical_header.setDefaultSectionSize(default_section_size)

    def connect_ui_elements(self):
        self.burgerButton.clicked.connect(self.onBurgerToggle)
        self.productNameInput.currentIndexChanged.connect(self.setProductDataFromDB)
        self.customerNameInput.currentIndexChanged.connect(self.setCustomerDataFromDB)

        self.bill_pages_btn.clicked.connect(lambda: self.stackPages.setCurrentWidget(self.bill_page))
        self.customer_pages_btn.clicked.connect(lambda: self.stackPages.setCurrentWidget(self.customer_page))
        self.help_pages_btn.clicked.connect(lambda: self.stackPages.setCurrentWidget(self.help_page))
        self.about_pages_btn.clicked.connect(lambda: self.stackPages.setCurrentWidget(self.about_page))

        self.addProduct_btn.clicked.connect(self.addProduct)
        self.clearProduct_btn.clicked.connect(lambda: self.showClearWarningDialog("product"))

        self.customerTable.cellChanged.connect(self.updateCustomerDatabase)
        self.editDB_btn.clicked.connect(lambda: self.editDB("customer"))
        self.clearDB_btn.clicked.connect(lambda: self.showClearWarningDialog("customer"))

        self.productDBTable.cellChanged.connect(self.updateProductDatabase)
        self.editProductDB_btn.clicked.connect(lambda: self.editDB("product"))
        self.clearProductDB_btn.clicked.connect(lambda: self.showClearWarningDialog("productDB"))

        self.addDB_btn.clicked.connect(lambda: self.addToDatabase("customer"))
        self.addProductDB_btn.clicked.connect(lambda: self.addToDatabase("product"))
        self.generateBill_btn.clicked.connect(self.generateDocument)

        
        
        self.update_background()
        self.refreshForm.clicked.connect(self.update_background)
        self.printForm_btn.clicked.connect(self.printDialog)
        self.refreshCombo_btn.clicked.connect(self.addItemToQcombo)

    def update_background(self):
        def setStateOnBackgroundChanged(png_file):
            self.showPDF.setStyleSheet(f"background-image: url({png_file});")
        typePage = self.typePageSelector.currentText()
        pngCounter = len(glob.glob1(f"generator/png/{typePage}/","*.png"))
        file = f"generator/png/{typePage}/converted_{pngCounter}_{typePage}.png"
        pixmap = QPixmap(file)
        setStateOnBackgroundChanged(file)
        
    def printDialog(self):
        typePage = self.typePageSelector.currentText()
        pdfCounter = len(glob.glob1("generator/pdf/primary/","*.pdf"))

        pdf_file = f"generator/pdf/{typePage}/converted_{pdfCounter}_{typePage}.pdf"
        file_extension = os.path.splitext(pdf_file)[1]
        if file_extension == ".pdf":
            printer = QPrinter(QPrinter.HighResolution)
            preview_dialog = QPrintPreviewDialog(printer, self)

            def preview_pdf(p):
                with tempfile.TemporaryDirectory() as path:
                    images = convert_from_path(pdf_file, dpi=300, output_folder=path)
                    print("Number of images:", len(images))

                    painter = QPainter()
                    painter.begin(p)
                    for i, image in enumerate(images):
                        if i > 0:
                            p.newPage()
                        rect = painter.viewport()

                        qtImage = QImage(image.size[0], image.size[1], QImage.Format_RGB32)
                        qtImage.fill(Qt.white)
                        buffer = QBuffer()
                        buffer.open(QIODevice.WriteOnly)
                        image.save(buffer, "PNG")
                        qtImage.loadFromData(buffer.data(), "PNG")

                        qtImageScaled = qtImage.scaled(rect.size(), Qt.KeepAspectRatio, Qt.SmoothTransformation)
                        painter.drawImage(rect, qtImageScaled)
                    painter.end()

            preview_dialog.paintRequested.connect(preview_pdf)

            if preview_dialog.exec() == QPrintPreviewDialog.Accepted:
                print("Printing completed")
            else:
                print("Print preview dialog not accepted")
        else:
            print("Not a PDF file")

    def showConfirmGenerateDialog(self):
        def create_dialog(ok_button_callback, title, primaryText, secondaryText, mode):
            dialog = QMessageBox(self)
            dialog.setObjectName("Dialog")
            dialog.setText(f'<h2 style="color: #fff; font-weight: bold;">{primaryText}</h2><br /><span style="color: #fff;">{secondaryText}</span>')
            dialog.setWindowTitle(title)
            if mode == "confirm":
                print("in")
                dialog.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
                ok_button = dialog.button(QMessageBox.Ok)
                ok_button.setObjectName("okButton")
                ok_button.setText("Confirm")
                ok_button.setCursor(Qt.PointingHandCursor)
                cancel_button = dialog.button(QMessageBox.Cancel)
                cancel_button.setObjectName("cancelButton")
                cancel_button.setCursor(Qt.PointingHandCursor)

                ok_button.clicked.connect(ok_button_callback)

            elif mode == "done":
                dialog.setStandardButtons(QMessageBox.Ok)
                ok_button = dialog.button(QMessageBox.Ok)
                ok_button.setObjectName("okButton")
                ok_button.setText("Ok")
                ok_button.setCursor(Qt.PointingHandCursor)

            elif mode == "fail":
                dialog.setStandardButtons(QMessageBox.Ok)

                ok_button = dialog.button(QMessageBox.Ok)
                ok_button.setObjectName("okButton")
                ok_button.setText("Ok")
                ok_button.setCursor(Qt.PointingHandCursor)

            dialog.setStyleSheet("""
                #Dialog{text-align: center;}
                QPushButton {background-color: #2ecc71;color: white;border: none;border-radius: 5px;font-size: 14px;padding: 8px 16px;}
                QPushButton:hover {background-color: #27ae60;}
                QPushButton#okButton {background-color: #df0021;}
                QPushButton#cancelButton {background-color: #1f59d6;}
                QPushButton#okButton:hover {background-color: #b6001b;}
                QPushButton#cancelButton:hover {background-color: #1a4cb1;}
                """)
            return dialog
        
        def get_table_items(table:QTableWidget):
            items = []
            for row in range(table.rowCount()):
                row_items = []
                row_items.append(row+1)
                for column in range(table.columnCount()):
                    item = table.item(row, column)
                    if item is not None:
                        row_items.append(item.text())
                items.append(row_items)
            return items
        
        def generate():
            genName = self.customerNameInput.currentText()
            genAddr = self.addressInput.text()
            genBill = self.billNumberInput.text()
            genDate = self.dateEdit.text()
            genTax = self.taxNumberInput.text()
            genTotal = self.TotalPrice
            productList = get_table_items(self.productTable)
            document = DocumentGenerator()
            genCheck = document.render(genName, genAddr, genBill, genDate, genTax, genTotal, productList)
            if genCheck:
                print("true")
                dialog = create_dialog(lambda: (), "Successful", "Generate Successful", "Please check file preview before print it.", "done")
                dialog.exec()
            else:
                dialog = create_dialog(lambda: (), "Failed", "Generate Failed", "Something went wrong.", "failed")
                dialog.exec()
                
        rowCount = self.productTable.rowCount()
        if rowCount > 0:
            dialog = create_dialog(generate, "Confirm Generate", "Confirm Generate Your Bill?", "Before generate make sure that your input data is valid.", "confirm")
            dialog.exec()

    def generateDocument(self):
        self.showConfirmGenerateDialog()

    def updateProductDatabase(self, row, column):
        updateValue = self.productDBTable.item(row, column).text()
        ID = row+1
        colName = self.productDBTable.horizontalHeaderItem(column).text()
        print(colName + " " + updateValue)
        with sqlite3.connect("database/customer.db") as conn:
            cursor = conn.cursor()
            cursor.execute(f"UPDATE ProductTable SET {colName} = ? WHERE Serial = ?", (updateValue, ID))
            conn.commit()

    def updateCustomerDatabase(self, row, column):
        updateValue = self.customerTable.item(row, column).text()
        ID = row+1
        colName = self.customerTable.horizontalHeaderItem(column).text()
        print(colName + " " + updateValue)
        with sqlite3.connect("database/customer.db") as conn:
            cursor = conn.cursor()
            cursor.execute(f"UPDATE CustomerTable SET {colName} = ? WHERE id = ?", (updateValue, ID))
            conn.commit()

    @lru_cache(maxsize=None)
    def loadDataFromDB(self):
        dbPathCheck = "database/customer.db"
        if os.path.exists(dbPathCheck):
            with sqlite3.connect(dbPathCheck) as conn:
                cursor = conn.cursor()
                try:
                    queryCustomer = "SELECT * FROM CustomerTable"
                    for row in cursor.execute(queryCustomer):
                        customerDB:list = [row[0], row[1], row[2], row[3], row[4], str(row[5]), row[6]]
                        rowCount = self.customerTable.rowCount()
                        self.customerTable.insertRow(rowCount)
                        self.customerTableHeight += 50
                        self.customerTable.setMinimumSize(QSize(0, self.customerTableHeight))
                        self.customerTable.setRowHeight(rowCount, 50)
                        for numCols in range(self.customerTable.columnCount()):
                            if numCols == 7:
                                deleteRowsButton = self.create_delete_button()
                                deleteRowsButton.setProperty("row", rowCount)
                                deleteRowsButton.clicked.connect(self.delRowDB)
                                self.customerTable.setCellWidget(rowCount, numCols, self.create_widget_with_layout(deleteRowsButton))
                                
                            else:
                                item = QTableWidgetItem(str(customerDB[numCols]))
                                item.setTextAlignment(Qt.AlignCenter)
                                self.customerTable.setItem(rowCount, numCols, item)
                        
                except sqlite3.Error as e:
                    print(e)

                try:
                    queryProduct = "SELECT * FROM ProductTable"
                    for row in cursor.execute(queryProduct):
                        productDB:list = [row[0], row[1], row[2], row[3]]
                        rowCount = self.productDBTable.rowCount()
                        self.productDBTable.insertRow(rowCount)
                        self.productDBTableHeight += 50
                        self.productDBTable.setMinimumSize(QSize(0, self.productDBTableHeight))
                        self.productDBTable.setRowHeight(rowCount, 50)
                        for numCols in range(self.productDBTable.columnCount()):
                            if numCols == 4:
                                deleteRowsButton = self.create_delete_button()
                                deleteRowsButton.setProperty("row", rowCount)
                                deleteRowsButton.clicked.connect(self.delProductRowDB)
                                self.productDBTable.setCellWidget(rowCount, numCols, self.create_widget_with_layout(deleteRowsButton))
                                #self.productTable.setCellWidget(rowCount, numCols, check_box)
                                
                            else:
                                item = QTableWidgetItem(str(productDB[numCols]))
                                item.setTextAlignment(Qt.AlignCenter)
                                self.productDBTable.setItem(rowCount, numCols, item)

                except sqlite3.Error as e:
                    print(e)
        else: 
            os.makedirs("database")
            with sqlite3.connect(dbPathCheck) as conn:
                cursor = conn.cursor()
                cursor.execute("""
                CREATE TABLE IF NOT EXISTS CustomerTable (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    Name TEXT NOT NULL,
                    Address TEXT NOT NULL,
                    Country TEXT NOT NULL,
                    Contact TEXT NOT NULL,
                    HaveBought REAL,
                    History TEXT
                );
                """)
                cursor.execute("""
                CREATE TABLE IF NOT EXISTS ProductTable (
                    Serial INTEGER PRIMARY KEY AUTOINCREMENT,
                    Name TEXT NOT NULL,
                    Price REAL NOT NULL,
                    Stock INTEGER NOT NULL
                );
                """)
                conn.commit()
                print("CustomerTable and ProductTable created successfully.")

        
    def addToDatabase(self, choice):
        customerName = self.dbCustomerName.text()
        customerAddress = self.dbAddressInput.text()
        customerCountry = self.dbCustomerCountry.currentText()
        customerContact = self.dbContactInput.text()
        productName = self.dbProductNameInput.text()

        validator = QDoubleValidator()
        validator.setDecimals(2)
        self.dbHaveBoughtInput.setValidator(validator)
        self.dbProductPriceInput.setValidator(validator)

        haveBought = self.dbHaveBoughtInput.text()
        history = self.dbHistoryInput.text()
        productPrice = self.dbProductPriceInput.text()
        productStock = self.dbProductStockInput.text()

        if choice == "customer":
            if customerName and customerAddress and customerCountry and customerContact:
                with sqlite3.connect("database/customer.db") as conn:
                    cursor = conn.cursor()
                    cursor.execute("INSERT INTO CustomerTable (Name, Address, Country, Contact, HaveBought, History) VALUES(?, ?, ?, ?, ?, ?)", (customerName, customerAddress, customerCountry, customerContact, haveBought, history))
                    conn.commit()
                    query = "SELECT * FROM CustomerTable ORDER BY id DESC LIMIT 1"
                    rows = cursor.execute(query).fetchall()

                for row in rows:
                    self.add_customer_to_table(row)

        elif choice == "product":
            if productName and productPrice and productStock:
                with sqlite3.connect("database/customer.db") as conn:
                    cursor = conn.cursor()
                    cursor.execute("INSERT INTO ProductTable (Name, Price, Stock) VALUES(?, ?, ?)", (productName, productPrice, productStock))
                    conn.commit()
                    query = "SELECT * FROM ProductTable ORDER BY Serial DESC LIMIT 1"
                    rows = cursor.execute(query).fetchall()

                for row in rows:
                    self.add_product_to_table(row)

    def add_customer_to_table(self, row):
        customer = [row[0], row[1], row[2], row[3], row[4], str(row[5]), row[6]]
        rowCount = self.customerTable.rowCount()
        self.customerTable.insertRow(rowCount)
        self.customerTableHeight += 50
        self.customerTable.setMinimumSize(QSize(0, self.customerTableHeight))
        self.customerTable.setRowHeight(rowCount, 50)

        for numCols in range(self.customerTable.columnCount()):
            if numCols == 7:
                deleteRowsButton = self.create_delete_button()
                deleteRowsButton.setProperty("row", rowCount)
                deleteRowsButton.clicked.connect(self.delRowDB)
                self.customerTable.setCellWidget(rowCount, numCols, self.create_widget_with_layout(deleteRowsButton))
            else:
                item = QTableWidgetItem(str(customer[numCols]))
                item.setTextAlignment(Qt.AlignCenter)
                self.customerTable.setItem(rowCount, numCols, item)

    def add_product_to_table(self, row):
        product = [row[0], row[1], str(row[2]), row[3]]
        rowCount = self.productDBTable.rowCount()
        self.productDBTable.insertRow(rowCount)
        self.productDBTableHeight += 50
        self.productDBTable.setMinimumSize(QSize(0, self.productDBTableHeight))
        self.productDBTable.setRowHeight(rowCount, 50)

        for numCols in range(self.productDBTable.columnCount()):
            if numCols == 4:
                deleteRowsButton = self.create_delete_button()
                deleteRowsButton.setProperty("row", rowCount)
                deleteRowsButton.clicked.connect(self.delProductRowDB)
                self.productDBTable.setCellWidget(rowCount, numCols, self.create_widget_with_layout(deleteRowsButton))
            else:
                item = QTableWidgetItem(str(product[numCols]))
                item.setTextAlignment(Qt.AlignCenter)
                self.productDBTable.setItem(rowCount, numCols, item)

    def create_delete_button(self):
        deleteRowsButton = QPushButton("Delete")
        deleteRowsButton.setObjectName("deleteRowsButton")
        deleteRowsButton.setStyleSheet("""
            #deleteRowsButton {
                background-color: rgb(223, 0, 33);
                border-radius: 10px;
                font-weight:bold;
                padding: 10px;
                color: rgb(221, 221, 221);
            }

            #deleteRowsButton:hover {
                border: 1px solid rgb(223, 0, 33);
                background-color: rgb(19, 19, 21);
                color: rgb(223, 0, 33);
            }
        """)
        deleteRowsButton.setCursor(Qt.PointingHandCursor)
        return deleteRowsButton
    
    def create_widget_with_layout(self, widget):
        layout = QHBoxLayout()
        layout.setAlignment(Qt.AlignCenter)
        layout.addWidget(widget)
        widgets = QWidget()
        widgets.setLayout(layout)
        return widgets


    def editDB(self, choice):
        if choice == "customer":
            if self.customerTable.editTriggers() == QAbstractItemView.NoEditTriggers:
                self.customerTable.setEditTriggers(QAbstractItemView.DoubleClicked)  # Enable editing
            else:
                self.customerTable.setEditTriggers(QAbstractItemView.NoEditTriggers)
        elif choice == "product":
            if self.productDBTable.editTriggers() == QAbstractItemView.NoEditTriggers:
                self.productDBTable.setEditTriggers(QAbstractItemView.DoubleClicked)  # Enable editing
            else:
                self.productDBTable.setEditTriggers(QAbstractItemView.NoEditTriggers)

    def delProductRowDB(self):
            button = self.sender()
            row = button.property("row")
            ID = self.productDBTable.item(row, 0).text()
            if row is not None:
                with sqlite3.connect("database/customer.db") as conn:
                    cursor = conn.cursor()
                    query = f"DELETE FROM ProductTable WHERE serial = {int(ID)}"
                    cursor.execute(query)
                    conn.commit()
                    print("Row: ", row)
                    self.productDBTable.removeRow(row)
                    self.productDBTableHeight -= 50
                    self.productDBTable.setMinimumSize(QSize(0, self.productDBTableHeight))
                    self.updateRowNumbers("productDB")

    def delRowDB(self):
        button = self.sender()
        row = button.property("row")
        ID = self.customerTable.item(row, 0).text()
        if row is not None:
            with sqlite3.connect("database/customer.db") as conn:
                cursor = conn.cursor()
                query = f"DELETE FROM CustomerTable WHERE id = {int(ID)}"
                cursor.execute(query)
                conn.commit()
                print("Row: ", row)
                self.customerTable.removeRow(row)
                self.customerTableHeight -= 50
                self.customerTable.setMinimumSize(QSize(0, self.customerTableHeight))
                self.updateRowNumbers("customer")

        else:
            print("Invalid index or not a delete button cell")

    def onBurgerToggle(self):
        if self.SideBar.isVisible():
            self.sidebar_animation.setStartValue(self.SideBar.maximumWidth())
            self.sidebar_animation.setEndValue(0)
            self.sidebar_animation.finished.connect(lambda: self.SideBar.hide())
        else:
            self.SideBar.show()
            self.sidebar_animation.setStartValue(0)
            self.sidebar_animation.setEndValue(250)  # Set this to the desired expanded width
            self.sidebar_animation.finished.disconnect()
            self.SideBar.show()

        self.sidebar_animation.setEasingCurve(QEasingCurve.InOutQuart)
        self.sidebar_animation.start()

    def showClearWarningDialog(self, choice):
        def create_dialog(title, ok_button_callback):
            dialog = QMessageBox(self)
            dialog.setText('<h2 style="color: #fff; font-weight: bold;">Your table will disappear</h2><br /><span style="color: #fff;">after clicked confirm your all data in table will delete</span>')
            dialog.setWindowTitle(title)
            dialog.setIcon(QMessageBox.Warning)
            dialog.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)

            ok_button = dialog.button(QMessageBox.Ok)
            ok_button.setObjectName("okButton")
            ok_button.setText("Confirm")
            ok_button.setCursor(Qt.PointingHandCursor)
            cancel_button = dialog.button(QMessageBox.Cancel)
            cancel_button.setObjectName("cancelButton")
            cancel_button.setCursor(Qt.PointingHandCursor)

            ok_button.clicked.connect(ok_button_callback)

            dialog.setStyleSheet("""
            QPushButton {background-color: #2ecc71;color: white;border: none;border-radius: 5px;font-size: 14px;padding: 8px 16px;}
            QPushButton:hover {background-color: #27ae60;}
            QPushButton#okButton {background-color: #df0021;}
            QPushButton#cancelButton {background-color: #1f59d6;}
            QPushButton#okButton:hover {background-color: #b6001b;}
            QPushButton#cancelButton:hover {background-color: #1a4cb1;}
            """)
            return dialog

        if choice == "product":
            rowCount = self.productTable.rowCount()
            if rowCount > 0:
                dialog = create_dialog("Clear Warning", self.clearProduct)
                dialog.exec()

        elif choice == "customer":
            rowCount = self.customerTable.rowCount()
            if rowCount > 0:
                dialog = create_dialog("Clear Warning", self.clearCustomerDatabase)
                dialog.exec()

        elif choice == "productDB":
            rowCount = self.productDBTable.rowCount()
            if rowCount > 0:
                dialog = create_dialog("Clear Warning", self.clearProductDatabase)
                dialog.exec()

    def clearProductDatabase(self):
        rowCount = self.productDBTable.rowCount()
        with sqlite3.connect("database/customer.db") as conn:
            if rowCount > 0:
                cursor = conn.cursor()
                query = "DELETE FROM ProductTable"
                resetSeq = "DELETE FROM sqlite_sequence WHERE name='ProductTable'"
                cursor.execute(query)
                cursor.execute(resetSeq)
                conn.commit()
            while rowCount > 0:
                self.productDBTable.removeRow(0)
                self.productDBTableHeight -= 50
                rowCount = self.productDBTable.rowCount()
            self.productDBTable.setMinimumSize(QSize(0, self.productDBTableHeight))

    def clearCustomerDatabase(self):
        rowCount = self.customerTable.rowCount()
        with sqlite3.connect("database/customer.db") as conn:
            if rowCount > 0:
                cursor = conn.cursor()
                query = "DELETE FROM CustomerTable"
                resetSeq = "DELETE FROM sqlite_sequence WHERE name='CustomerTable'"
                cursor.execute(query)
                cursor.execute(resetSeq)
                conn.commit()
            while rowCount > 0:
                self.customerTable.removeRow(0)
                self.customerTableHeight -= 50
                rowCount = self.customerTable.rowCount()
            self.customerTable.setMinimumSize(QSize(0, self.customerTableHeight))

    def clearProduct(self):
        rowCount = self.productTable.rowCount()
        while rowCount > 0:
            self.productTable.removeRow(0)
            self.productTableHeight -= 50
            rowCount = self.productTable.rowCount()
        self.productTable.setMinimumSize(QSize(0, self.productTableHeight))
        self.calculateTotalPrice()
                
    def calculateTotalPrice(self):
        rowCount = self.productTable.rowCount()
        totalPrice = 0
        for row in range(rowCount):
            item = self.productTable.item(row, 3)
            quantity = self.productTable.item(row, 2)
            if item is not None:
                totalPrice += (float(item.text()) * int(quantity.text()))
        self.TotalPrice = totalPrice
        self.Total.setText("Total: {:.2f} THB".format(totalPrice))
        
    def addProduct(self):
        
        self.productTableHeight = self.productTable.height()
        productName = self.productNameInput.currentText()
        quantity = self.quantityInput.currentText()
        validator = QDoubleValidator()
        validator.setDecimals(2)
        self.priceInput.setValidator(validator)
        price = self.priceInput.text()
        self.TotalPrice += float(price)

        with sqlite3.connect("database/customer.db") as conn:
            cursor = conn.cursor()
            cursor.execute("SELECT Serial FROM ProductTable WHERE Name=?", (productName,))
            serialNumber = cursor.fetchone()[0]
            if serialNumber and productName and quantity and price is not None:  
                product:list = [serialNumber, productName, str(quantity), price]
                rowCount = self.productTable.rowCount()
                self.productTable.insertRow(rowCount)
                self.productTableHeight += 50
                self.productTable.setMinimumSize(QSize(0, self.productTableHeight))
                self.productTable.setRowHeight(rowCount, 50)
                for numCols in range(5):
                    if numCols == 4:
                        deleteRowsButton = QPushButton("Delete")
                        deleteRowsButton.setObjectName("deleteRowsButton")  # create a new instance of QCheckBox for each row
                        deleteRowsButton.setStyleSheet("""
    #deleteRowsButton {
        background-color: rgb(223, 0, 33);
        border-radius: 10px;
        padding: 10px;
        color: rgb(221, 221, 221);
    }

    #deleteRowsButton:hover {
        border: 1px solid rgb(223, 0, 33);
        background-color: rgb(19, 19, 21);
        color: rgb(223, 0, 33);
    }
    """)
                        deleteRowsButton.setCursor(Qt.PointingHandCursor)
                        layout = QHBoxLayout()
                        layout.setAlignment(Qt.AlignCenter)
                        layout.addWidget(deleteRowsButton)
                        widgets = QWidget()
                        widgets.setLayout(layout)

                        deleteRowsButton.setProperty("row", rowCount)
                        deleteRowsButton.clicked.connect(self.delProduct)

                        self.productTable.setCellWidget(rowCount, numCols, widgets)
                        #self.productTable.setCellWidget(rowCount, numCols, check_box)
                        self.calculateTotalPrice()
                    else:
                        item = QTableWidgetItem(str(product[numCols]))
                        item.setTextAlignment(Qt.AlignCenter)
                        self.productTable.setItem(rowCount, numCols, item)
                    
                    """self.serialInput.clear()
                    self.productNameInput.clear()
                    self.priceInput.clear()"""

    def delProduct(self):
        button = self.sender()
        row = button.property("row")
        if row is not None:
            print(row)
            self.productTable.removeRow(row)
            self.productTableHeight -= 50
            self.productTable.setMinimumSize(QSize(0, self.productTableHeight))
            self.updateRowNumbers("product")
            self.calculateTotalPrice()
        else:
            print("Invalid index or not a delete button cell")

    def updateRowNumbers(self, choice):
        if choice == "product":
            rowCount = self.productTable.rowCount()
            for row in range(rowCount):
                deleteButton = self.productTable.cellWidget(row, self.productTable.columnCount() - 1).layout().itemAt(0).widget()
                deleteButton.setProperty('row', row)
        elif choice == "customer":
            rowCount = self.customerTable.rowCount()
            for row in range(rowCount):
                deleteButton = self.customerTable.cellWidget(row, self.customerTable.columnCount() - 1).layout().itemAt(0).widget()
                deleteButton.setProperty('row', row)
        elif choice == "productDB":
            rowCount = self.productDBTable.rowCount()
            for row in range(rowCount):
                deleteButton = self.productDBTable.cellWidget(row, self.productDBTable.columnCount() - 1).layout().itemAt(0).widget()
                deleteButton.setProperty('row', row)

    def addItemToQcombo(self):
        with sqlite3.connect("database/customer.db") as conn:
            conn.cursor()
            self.productNameInput.clear()
            productNameQuery = "SELECT Name FROM ProductTable"
            for row in conn.execute(productNameQuery):
                self.productNameInput.addItem(row[0])

        with sqlite3.connect("database/customer.db") as conn:
            conn.cursor()
            self.customerNameInput.clear()
            customerNameQuery = "SELECT Name FROM CustomerTable"
            for row in conn.execute(customerNameQuery):
                self.customerNameInput.addItem(row[0])
        self.customerNameInput.setEditable(True)
                
        countryList = CountryList()
        self.dbCustomerCountry.addItems(countryList.country_list)
        self.dbCustomerCountry.setEditable(True)

    def setCustomerDataFromDB(self, index):
        select_item = self.customerNameInput.itemText(index)
        with sqlite3.connect("database/customer.db") as conn:
            cursor = conn.cursor()
            cursor.execute("SELECT Address FROM CustomerTable WHERE Name=?", (select_item,))
            fetched_addr = cursor.fetchone()
            
            if fetched_addr is not None:
                addr = fetched_addr[0]
                self.addressInput.setText(str(addr))
            else:
                self.addressInput.setText("")
                print("No address found for the selected customer.")

    def setProductDataFromDB(self, index):
        select_item = self.productNameInput.itemText(index)
        with sqlite3.connect("database/customer.db") as conn:
            cursor = conn.cursor()
            cursor.execute("SELECT Stock FROM ProductTable WHERE Name=?", (select_item,))
            fetched_stock = cursor.fetchone()

            if fetched_stock is not None:
                stock = fetched_stock[0]
                self.quantityInput.clear()

                for count in range(stock):
                    self.quantityInput.addItem(str(count+1))
                # handle the case when the product is not found in the database
            self.priceInput.clear()
            cursor.execute("SELECT Price FROM ProductTable WHERE Name=?", (select_item,))
            fetched_price = cursor.fetchone()

            if fetched_price is not None:
                price = fetched_price[0]
                self.priceInput.setText(str(price))

class SplashScreen(QSplashScreen, Ui_Form):
    def __init__(self):
        QSplashScreen.__init__(self)
        self.setupUi(self)
        self.center_on_screen()
        self.setWindowFlag(Qt.FramelessWindowHint)
        
        self.label_description.setText("<strong>LOADING</strong> USER INTERFACE")

    def center_on_screen(self):
        screen = QApplication.primaryScreen()
        screen_geometry = screen.availableGeometry()
        splash_geometry = self.frameGeometry()
        center_point = screen_geometry.center()
        splash_geometry.moveCenter(center_point)
        self.move(splash_geometry.topLeft())

    def progress(self):
        for counter in range(100):
            time.sleep(0.025)
            if counter == 25:
                self.label_description.setText("<strong>WELCOME</strong> TO MY APPLICATION")
            elif counter == 50: 
                self.label_description.setText("<strong>LOADING</strong> DATABASE")
            elif counter == 100:
                self.label_description.setText("<strong>LOADING</strong> Finish")
            self.progressBar.setValue(counter)
            counter += 1

if __name__ == "__main__":
    app = QApplication(sys.argv)
    splashScreen = SplashScreen()
    splashScreen.show()
    splashScreen.progress()

    window = MainWindow()
    window.show()
    splashScreen.finish(window)
    sys.exit(app.exec())