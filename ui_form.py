# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'form.ui'
##
## Created by: Qt User Interface Compiler version 6.4.3
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QAbstractItemView, QApplication, QComboBox, QDateEdit,
    QFrame, QHBoxLayout, QHeaderView, QLabel,
    QLineEdit, QMainWindow, QPushButton, QScrollArea,
    QSizePolicy, QStackedWidget, QTableWidget, QTableWidgetItem,
    QVBoxLayout, QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(1243, 708)
        font = QFont()
        font.setBold(False)
        MainWindow.setFont(font)
        MainWindow.setStyleSheet(u"*{\n"
"	margin: 0;\n"
"	padding: 0;\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}\n"
"QLabel{\n"
"	background-color: transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(91, 91, 91);\n"
"}\n"
"QMessageBox {\n"
"    background-color: rgb(43, 45, 49);\n"
"	color: #fff;\n"
" }\n"
"\n"
"toolbar{\n"
"	display:none;\n"
"}\n"
"\n"
"#MoreText{\n"
"	color: rgb(136, 136, 136)\n"
"}\n"
"\n"
"QToolBar{\n"
"	background-color: #1e1f22;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-color: #1e1f22;\n"
"	\n"
"}\n"
"\n"
"#BodyContainer{\n"
"background-color: #2b2d31;\n"
"	border-radius: 25px;\n"
"}\n"
"\n"
"#WrapFirst, #WrapSecond, #WrapMainContent{\n"
"	border-radius: 15px;\n"
"	background-color: #1e1f22;\n"
"}\n"
"\n"
"#bill_pages_btn:hover, #customer_pages_btn:hover, #help_pages_btn:hover, #about_pages_btn:hover{\n"
"	border-left: 3px solid #FF8B13;\n"
"}\n"
"\n"
"#bill_pages_btn:focus, #customer_pages_btn:focus, #help_pages_btn:focus, #about_pages_btn:focus{\n"
"	border-left: 3px solid #FF8"
                        "B13;\n"
"}\n"
"\n"
"#switch_mode_btn:hover{\n"
"	border-bottom: 3px solid #FF8B13;\n"
"}\n"
"\n"
"#customerNameInput, #addressInput, #billNumberInput, #taxNumberInput, #serialInput, #productNameInput, #priceInput{\n"
"	background-color: #fff;\n"
"	padding: 3px;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QDateEdit, QComboBox{\n"
"    background-color: white;\n"
"	color: #000;\n"
"	padding: 3px;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #f0f0f0;\n"
"    color: #000;\n"
"    selection-background-color: #FF8B13;\n"
"    selection-color: #fff;\n"
"    border: 1px solid #ccc;\n"
"    padding: 2px;\n"
"}\n"
"#addProduct_btn{\n"
"	background-color: #FF8B13;\n"
"	border-radius: 10px;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"#clearProduct_btn{\n"
"	background-color: rgb(223, 0, 33);\n"
"	border-radius: 10px;\n"
"	color: rgb(221,"
                        " 221, 221);\n"
"}\n"
"\n"
"#clearProduct_btn:hover{\n"
"	border: 1px solid rgb(223, 0, 33);\n"
"    background-color: rgb(19, 19, 21);\n"
"	color: rgb(223, 0, 33);\n"
"}\n"
"\n"
"\n"
"\n"
"#setCustomer_btn:hover, #addProduct_btn:hover{\n"
"	border: 1px solid #FF8B13;\n"
"    background-color: rgb(19, 19, 21);\n"
"	color: #FF8B13;\n"
"}\n"
"\n"
"#line, #line_2, #line_3, #line_4, #line_5, #line_6, #line_7, #line_8, #line_9, #line_10, #line_11{\n"
"	background-color: #FF8B13;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"#wrapForm{\n"
"	background:rgb(18, 18, 18);\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"#productTable {\n"
"    color: #000;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    background-color: transparent;\n"
"    color: #fff;\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color: #fff;\n"
"	color: #000;\n"
"\n"
"	font-size: 15px;\n"
"	border: none;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: none;\n"
"    outline: none;\n"
"}\n"
"\n"
"QHeaderView:"
                        ":section {\n"
"    background-color: transparent;\n"
"    color:rgb(255, 139, 19);\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"    border-bottom: 2px solid rgb(255, 139, 19);\n"
"    border-radius: none;\n"
"}\n"
"\n"
"QHeaderView::section:vertical{\n"
"	border-bottom: none;\n"
"\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section {\n"
"    background-color: transparent;\n"
"	border-bottom: 2px solid rgb(255, 139, 19);\n"
"    border-radius: none;\n"
"}\n"
"\n"
"#printForm_btn {\n"
"	background-color: rgb(43, 45, 49);\n"
"	color: rgb(30, 31, 34);\n"
"	color: rgb(221, 221, 221);\n"
"	padding: 10px;\n"
"\n"
"}\n"
"\n"
"#printForm_btn:hover {\n"
"	border-bottom: 3px solid #FF8B13;\n"
"	padding: 10px;\n"
"}\n"
"")
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayout = QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.HeaderBar = QWidget(self.centralwidget)
        self.HeaderBar.setObjectName(u"HeaderBar")
        self.horizontalLayout = QHBoxLayout(self.HeaderBar)
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.frame = QFrame(self.HeaderBar)
        self.frame.setObjectName(u"frame")
        self.frame.setFrameShape(QFrame.StyledPanel)
        self.frame.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_4 = QHBoxLayout(self.frame)
        self.horizontalLayout_4.setObjectName(u"horizontalLayout_4")
        self.horizontalLayout_4.setContentsMargins(0, -1, -1, -1)
        self.burgerButton = QPushButton(self.frame)
        self.burgerButton.setObjectName(u"burgerButton")
        self.burgerButton.setCursor(QCursor(Qt.PointingHandCursor))
        self.burgerButton.setStyleSheet(u"#burgerButton{\n"
"	padding: 5px;\n"
"}\n"
"#burgerButton:hover{\n"
"	background-color: rgb(18, 18, 18);\n"
"	border-radius: 10px;\n"
"}\n"
"#burgerButton:pressed{\n"
"	background-color: rgb(91, 91, 91);\n"
"}")
        icon = QIcon()
        icon.addFile(u"resource/list.png", QSize(), QIcon.Normal, QIcon.Off)
        self.burgerButton.setIcon(icon)
        self.burgerButton.setIconSize(QSize(25, 25))

        self.horizontalLayout_4.addWidget(self.burgerButton)

        self.label = QLabel(self.frame)
        self.label.setObjectName(u"label")
        font1 = QFont()
        font1.setFamilies([u"Prompt"])
        font1.setPointSize(10)
        font1.setBold(True)
        self.label.setFont(font1)
        self.label.setStyleSheet(u"color: #fff;")
        self.label.setAlignment(Qt.AlignCenter)

        self.horizontalLayout_4.addWidget(self.label)


        self.horizontalLayout.addWidget(self.frame, 0, Qt.AlignLeft)

        self.frame_2 = QFrame(self.HeaderBar)
        self.frame_2.setObjectName(u"frame_2")
        self.frame_2.setFrameShape(QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_3 = QHBoxLayout(self.frame_2)
        self.horizontalLayout_3.setObjectName(u"horizontalLayout_3")
        self.horizontalLayout_3.setContentsMargins(-1, -1, 0, -1)
        self.switch_mode_btn = QPushButton(self.frame_2)
        self.switch_mode_btn.setObjectName(u"switch_mode_btn")
        self.switch_mode_btn.setMinimumSize(QSize(30, 30))
        icon1 = QIcon()
        icon1.addFile(u"../../.designer/backup/resource/dark-mode.png", QSize(), QIcon.Normal, QIcon.Off)
        self.switch_mode_btn.setIcon(icon1)
        self.switch_mode_btn.setIconSize(QSize(25, 25))

        self.horizontalLayout_3.addWidget(self.switch_mode_btn)


        self.horizontalLayout.addWidget(self.frame_2, 0, Qt.AlignRight)


        self.verticalLayout.addWidget(self.HeaderBar, 0, Qt.AlignTop)

        self.BodyContainer = QWidget(self.centralwidget)
        self.BodyContainer.setObjectName(u"BodyContainer")
        sizePolicy = QSizePolicy(QSizePolicy.Preferred, QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.BodyContainer.sizePolicy().hasHeightForWidth())
        self.BodyContainer.setSizePolicy(sizePolicy)
        self.horizontalLayout_2 = QHBoxLayout(self.BodyContainer)
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.SideBar = QWidget(self.BodyContainer)
        self.SideBar.setObjectName(u"SideBar")
        self.SideBar.setCursor(QCursor(Qt.ArrowCursor))
        self.verticalLayout_2 = QVBoxLayout(self.SideBar)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.verticalLayout_2.setContentsMargins(0, 0, -1, 0)
        self.WrapFirst = QWidget(self.SideBar)
        self.WrapFirst.setObjectName(u"WrapFirst")
        self.WrapFirst.setMinimumSize(QSize(60, 0))
        self.verticalLayout_3 = QVBoxLayout(self.WrapFirst)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.verticalLayout_3.setContentsMargins(-1, 0, -1, 0)
        self.bill_pages_btn = QPushButton(self.WrapFirst)
        self.bill_pages_btn.setObjectName(u"bill_pages_btn")
        self.bill_pages_btn.setMinimumSize(QSize(50, 50))
        self.bill_pages_btn.setCursor(QCursor(Qt.PointingHandCursor))
        icon2 = QIcon()
        icon2.addFile(u"resource/invoice.png", QSize(), QIcon.Normal, QIcon.Off)
        self.bill_pages_btn.setIcon(icon2)
        self.bill_pages_btn.setIconSize(QSize(25, 25))

        self.verticalLayout_3.addWidget(self.bill_pages_btn)

        self.customer_pages_btn = QPushButton(self.WrapFirst)
        self.customer_pages_btn.setObjectName(u"customer_pages_btn")
        self.customer_pages_btn.setMinimumSize(QSize(50, 50))
        self.customer_pages_btn.setCursor(QCursor(Qt.PointingHandCursor))
        icon3 = QIcon()
        icon3.addFile(u"resource/customer.png", QSize(), QIcon.Normal, QIcon.Off)
        self.customer_pages_btn.setIcon(icon3)
        self.customer_pages_btn.setIconSize(QSize(25, 25))

        self.verticalLayout_3.addWidget(self.customer_pages_btn)

        self.help_pages_btn = QPushButton(self.WrapFirst)
        self.help_pages_btn.setObjectName(u"help_pages_btn")
        self.help_pages_btn.setMinimumSize(QSize(50, 50))
        self.help_pages_btn.setCursor(QCursor(Qt.PointingHandCursor))
        icon4 = QIcon()
        icon4.addFile(u"resource/package.png", QSize(), QIcon.Normal, QIcon.Off)
        self.help_pages_btn.setIcon(icon4)
        self.help_pages_btn.setIconSize(QSize(25, 25))

        self.verticalLayout_3.addWidget(self.help_pages_btn)

        self.about_pages_btn = QPushButton(self.WrapFirst)
        self.about_pages_btn.setObjectName(u"about_pages_btn")
        self.about_pages_btn.setMinimumSize(QSize(50, 50))
        self.about_pages_btn.setCursor(QCursor(Qt.PointingHandCursor))
        icon5 = QIcon()
        icon5.addFile(u"resource/info-button.png", QSize(), QIcon.Normal, QIcon.Off)
        self.about_pages_btn.setIcon(icon5)
        self.about_pages_btn.setIconSize(QSize(25, 25))

        self.verticalLayout_3.addWidget(self.about_pages_btn)


        self.verticalLayout_2.addWidget(self.WrapFirst, 0, Qt.AlignLeft)


        self.horizontalLayout_2.addWidget(self.SideBar, 0, Qt.AlignLeft)

        self.WrapMainContent = QWidget(self.BodyContainer)
        self.WrapMainContent.setObjectName(u"WrapMainContent")
        sizePolicy1 = QSizePolicy(QSizePolicy.Expanding, QSizePolicy.Preferred)
        sizePolicy1.setHorizontalStretch(0)
        sizePolicy1.setVerticalStretch(0)
        sizePolicy1.setHeightForWidth(self.WrapMainContent.sizePolicy().hasHeightForWidth())
        self.WrapMainContent.setSizePolicy(sizePolicy1)
        self.horizontalLayout_5 = QHBoxLayout(self.WrapMainContent)
        self.horizontalLayout_5.setObjectName(u"horizontalLayout_5")
        self.horizontalLayout_5.setContentsMargins(0, 0, 0, 0)
        self.stackPages = QStackedWidget(self.WrapMainContent)
        self.stackPages.setObjectName(u"stackPages")
        self.bill_page = QWidget()
        self.bill_page.setObjectName(u"bill_page")
        self.horizontalLayout_6 = QHBoxLayout(self.bill_page)
        self.horizontalLayout_6.setObjectName(u"horizontalLayout_6")
        self.wrapForm = QWidget(self.bill_page)
        self.wrapForm.setObjectName(u"wrapForm")
        self.wrapForm.setMinimumSize(QSize(0, 0))
        self.verticalLayout_4 = QVBoxLayout(self.wrapForm)
        self.verticalLayout_4.setObjectName(u"verticalLayout_4")
        self.verticalLayout_4.setContentsMargins(0, -1, -1, -1)
        self.scrollArea = QScrollArea(self.wrapForm)
        self.scrollArea.setObjectName(u"scrollArea")
        sizePolicy2 = QSizePolicy(QSizePolicy.Preferred, QSizePolicy.Preferred)
        sizePolicy2.setHorizontalStretch(0)
        sizePolicy2.setVerticalStretch(0)
        sizePolicy2.setHeightForWidth(self.scrollArea.sizePolicy().hasHeightForWidth())
        self.scrollArea.setSizePolicy(sizePolicy2)
        self.scrollArea.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
        self.scrollArea.setWidgetResizable(True)
        self.scrollAreaWidgetContents = QWidget()
        self.scrollAreaWidgetContents.setObjectName(u"scrollAreaWidgetContents")
        self.scrollAreaWidgetContents.setGeometry(QRect(0, 0, 516, 693))
        self.verticalLayout_14 = QVBoxLayout(self.scrollAreaWidgetContents)
        self.verticalLayout_14.setObjectName(u"verticalLayout_14")
        self.WrapCustomer = QWidget(self.scrollAreaWidgetContents)
        self.WrapCustomer.setObjectName(u"WrapCustomer")
        self.verticalLayout_19 = QVBoxLayout(self.WrapCustomer)
        self.verticalLayout_19.setObjectName(u"verticalLayout_19")
        self.frame_8 = QFrame(self.WrapCustomer)
        self.frame_8.setObjectName(u"frame_8")
        self.frame_8.setFrameShape(QFrame.StyledPanel)
        self.frame_8.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_10 = QHBoxLayout(self.frame_8)
        self.horizontalLayout_10.setObjectName(u"horizontalLayout_10")
        self.label_10 = QLabel(self.frame_8)
        self.label_10.setObjectName(u"label_10")
        font2 = QFont()
        font2.setFamilies([u"Prompt SemiBold"])
        font2.setPointSize(15)
        font2.setBold(True)
        self.label_10.setFont(font2)
        self.label_10.setStyleSheet(u"color: #fff;")

        self.horizontalLayout_10.addWidget(self.label_10)

        self.line = QFrame(self.frame_8)
        self.line.setObjectName(u"line")
        sizePolicy1.setHeightForWidth(self.line.sizePolicy().hasHeightForWidth())
        self.line.setSizePolicy(sizePolicy1)
        self.line.setMinimumSize(QSize(0, 3))
        self.line.setMaximumSize(QSize(16777215, 10))
        self.line.setFrameShape(QFrame.StyledPanel)
        self.line.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_10.addWidget(self.line, 0, Qt.AlignVCenter)


        self.verticalLayout_19.addWidget(self.frame_8)

        self.widget_2 = QWidget(self.WrapCustomer)
        self.widget_2.setObjectName(u"widget_2")
        self.horizontalLayout_8 = QHBoxLayout(self.widget_2)
        self.horizontalLayout_8.setObjectName(u"horizontalLayout_8")
        self.horizontalLayout_8.setContentsMargins(0, 0, 0, 0)
        self.frame_5 = QFrame(self.widget_2)
        self.frame_5.setObjectName(u"frame_5")
        self.frame_5.setFrameShape(QFrame.StyledPanel)
        self.frame_5.setFrameShadow(QFrame.Raised)
        self.verticalLayout_10 = QVBoxLayout(self.frame_5)
        self.verticalLayout_10.setObjectName(u"verticalLayout_10")
        self.label_7 = QLabel(self.frame_5)
        self.label_7.setObjectName(u"label_7")
        font3 = QFont()
        font3.setBold(True)
        self.label_7.setFont(font3)
        self.label_7.setStyleSheet(u"color: #fff;")

        self.verticalLayout_10.addWidget(self.label_7)

        self.customerNameInput = QComboBox(self.frame_5)
        self.customerNameInput.setObjectName(u"customerNameInput")
        self.customerNameInput.setMinimumSize(QSize(200, 0))
        font4 = QFont()
        font4.setFamilies([u"Prompt"])
        font4.setPointSize(11)
        self.customerNameInput.setFont(font4)

        self.verticalLayout_10.addWidget(self.customerNameInput)


        self.horizontalLayout_8.addWidget(self.frame_5, 0, Qt.AlignTop)

        self.frame_6 = QFrame(self.widget_2)
        self.frame_6.setObjectName(u"frame_6")
        self.frame_6.setFrameShape(QFrame.StyledPanel)
        self.frame_6.setFrameShadow(QFrame.Raised)
        self.verticalLayout_11 = QVBoxLayout(self.frame_6)
        self.verticalLayout_11.setObjectName(u"verticalLayout_11")
        self.label_8 = QLabel(self.frame_6)
        self.label_8.setObjectName(u"label_8")
        font5 = QFont()
        font5.setBold(True)
        font5.setItalic(False)
        self.label_8.setFont(font5)
        self.label_8.setStyleSheet(u"color: #fff;")

        self.verticalLayout_11.addWidget(self.label_8)

        self.addressInput = QLineEdit(self.frame_6)
        self.addressInput.setObjectName(u"addressInput")
        font6 = QFont()
        font6.setFamilies([u"Prompt"])
        self.addressInput.setFont(font6)

        self.verticalLayout_11.addWidget(self.addressInput)


        self.horizontalLayout_8.addWidget(self.frame_6, 0, Qt.AlignTop)


        self.verticalLayout_19.addWidget(self.widget_2)

        self.widget = QWidget(self.WrapCustomer)
        self.widget.setObjectName(u"widget")
        self.horizontalLayout_7 = QHBoxLayout(self.widget)
        self.horizontalLayout_7.setObjectName(u"horizontalLayout_7")
        self.horizontalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.frame_7 = QFrame(self.widget)
        self.frame_7.setObjectName(u"frame_7")
        self.frame_7.setFrameShape(QFrame.StyledPanel)
        self.frame_7.setFrameShadow(QFrame.Raised)
        self.verticalLayout_12 = QVBoxLayout(self.frame_7)
        self.verticalLayout_12.setObjectName(u"verticalLayout_12")
        self.label_9 = QLabel(self.frame_7)
        self.label_9.setObjectName(u"label_9")
        self.label_9.setFont(font3)
        self.label_9.setStyleSheet(u"color: #fff;")

        self.verticalLayout_12.addWidget(self.label_9)

        self.billNumberInput = QLineEdit(self.frame_7)
        self.billNumberInput.setObjectName(u"billNumberInput")
        self.billNumberInput.setFont(font6)

        self.verticalLayout_12.addWidget(self.billNumberInput)


        self.horizontalLayout_7.addWidget(self.frame_7)

        self.frame_4 = QFrame(self.widget)
        self.frame_4.setObjectName(u"frame_4")
        self.frame_4.setFrameShape(QFrame.StyledPanel)
        self.frame_4.setFrameShadow(QFrame.Raised)
        self.verticalLayout_9 = QVBoxLayout(self.frame_4)
        self.verticalLayout_9.setObjectName(u"verticalLayout_9")
        self.label_6 = QLabel(self.frame_4)
        self.label_6.setObjectName(u"label_6")
        self.label_6.setFont(font3)
        self.label_6.setStyleSheet(u"color: #fff;")

        self.verticalLayout_9.addWidget(self.label_6)

        self.taxNumberInput = QLineEdit(self.frame_4)
        self.taxNumberInput.setObjectName(u"taxNumberInput")
        self.taxNumberInput.setFont(font6)

        self.verticalLayout_9.addWidget(self.taxNumberInput)


        self.horizontalLayout_7.addWidget(self.frame_4)

        self.frame_3 = QFrame(self.widget)
        self.frame_3.setObjectName(u"frame_3")
        self.frame_3.setFrameShape(QFrame.StyledPanel)
        self.frame_3.setFrameShadow(QFrame.Raised)
        self.verticalLayout_8 = QVBoxLayout(self.frame_3)
        self.verticalLayout_8.setObjectName(u"verticalLayout_8")
        self.label_2 = QLabel(self.frame_3)
        self.label_2.setObjectName(u"label_2")
        self.label_2.setFont(font3)
        self.label_2.setStyleSheet(u"color: #fff;")

        self.verticalLayout_8.addWidget(self.label_2)

        self.dateEdit = QDateEdit(self.frame_3)
        self.dateEdit.setObjectName(u"dateEdit")
        self.dateEdit.setFont(font4)

        self.verticalLayout_8.addWidget(self.dateEdit)


        self.horizontalLayout_7.addWidget(self.frame_3)


        self.verticalLayout_19.addWidget(self.widget)

        self.widget_4 = QWidget(self.WrapCustomer)
        self.widget_4.setObjectName(u"widget_4")
        self.verticalLayout_21 = QVBoxLayout(self.widget_4)
        self.verticalLayout_21.setObjectName(u"verticalLayout_21")
        self.verticalLayout_21.setContentsMargins(0, 0, 0, 0)

        self.verticalLayout_19.addWidget(self.widget_4, 0, Qt.AlignHCenter)


        self.verticalLayout_14.addWidget(self.WrapCustomer)

        self.WrapProduct = QWidget(self.scrollAreaWidgetContents)
        self.WrapProduct.setObjectName(u"WrapProduct")
        sizePolicy3 = QSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
        sizePolicy3.setHorizontalStretch(0)
        sizePolicy3.setVerticalStretch(0)
        sizePolicy3.setHeightForWidth(self.WrapProduct.sizePolicy().hasHeightForWidth())
        self.WrapProduct.setSizePolicy(sizePolicy3)
        self.verticalLayout_20 = QVBoxLayout(self.WrapProduct)
        self.verticalLayout_20.setObjectName(u"verticalLayout_20")
        self.frame_14 = QFrame(self.WrapProduct)
        self.frame_14.setObjectName(u"frame_14")
        self.frame_14.setFrameShape(QFrame.StyledPanel)
        self.frame_14.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_11 = QHBoxLayout(self.frame_14)
        self.horizontalLayout_11.setObjectName(u"horizontalLayout_11")
        self.label_15 = QLabel(self.frame_14)
        self.label_15.setObjectName(u"label_15")
        self.label_15.setFont(font2)
        self.label_15.setStyleSheet(u"color: #fff;")

        self.horizontalLayout_11.addWidget(self.label_15)

        self.line_2 = QFrame(self.frame_14)
        self.line_2.setObjectName(u"line_2")
        sizePolicy1.setHeightForWidth(self.line_2.sizePolicy().hasHeightForWidth())
        self.line_2.setSizePolicy(sizePolicy1)
        self.line_2.setMinimumSize(QSize(0, 3))
        self.line_2.setMaximumSize(QSize(16777215, 3))
        self.line_2.setFrameShape(QFrame.StyledPanel)
        self.line_2.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_11.addWidget(self.line_2)


        self.verticalLayout_20.addWidget(self.frame_14)

        self.widget_3 = QWidget(self.WrapProduct)
        self.widget_3.setObjectName(u"widget_3")
        self.horizontalLayout_9 = QHBoxLayout(self.widget_3)
        self.horizontalLayout_9.setObjectName(u"horizontalLayout_9")
        self.horizontalLayout_9.setContentsMargins(0, 0, 0, 0)
        self.frame_10 = QFrame(self.widget_3)
        self.frame_10.setObjectName(u"frame_10")
        self.frame_10.setFrameShape(QFrame.StyledPanel)
        self.frame_10.setFrameShadow(QFrame.Raised)
        self.verticalLayout_16 = QVBoxLayout(self.frame_10)
        self.verticalLayout_16.setObjectName(u"verticalLayout_16")
        self.label_12 = QLabel(self.frame_10)
        self.label_12.setObjectName(u"label_12")
        self.label_12.setFont(font5)
        self.label_12.setStyleSheet(u"color: #fff;")

        self.verticalLayout_16.addWidget(self.label_12)

        self.productNameInput = QComboBox(self.frame_10)
        self.productNameInput.setObjectName(u"productNameInput")
        self.productNameInput.setFont(font6)

        self.verticalLayout_16.addWidget(self.productNameInput)


        self.horizontalLayout_9.addWidget(self.frame_10)

        self.frame_11 = QFrame(self.widget_3)
        self.frame_11.setObjectName(u"frame_11")
        self.frame_11.setFrameShape(QFrame.StyledPanel)
        self.frame_11.setFrameShadow(QFrame.Raised)
        self.verticalLayout_17 = QVBoxLayout(self.frame_11)
        self.verticalLayout_17.setObjectName(u"verticalLayout_17")
        self.label_13 = QLabel(self.frame_11)
        self.label_13.setObjectName(u"label_13")
        self.label_13.setFont(font5)
        self.label_13.setStyleSheet(u"color: #fff;")

        self.verticalLayout_17.addWidget(self.label_13)

        self.quantityInput = QComboBox(self.frame_11)
        self.quantityInput.setObjectName(u"quantityInput")
        self.quantityInput.setFont(font6)

        self.verticalLayout_17.addWidget(self.quantityInput)


        self.horizontalLayout_9.addWidget(self.frame_11)

        self.frame_12 = QFrame(self.widget_3)
        self.frame_12.setObjectName(u"frame_12")
        self.frame_12.setFrameShape(QFrame.StyledPanel)
        self.frame_12.setFrameShadow(QFrame.Raised)
        self.verticalLayout_18 = QVBoxLayout(self.frame_12)
        self.verticalLayout_18.setObjectName(u"verticalLayout_18")
        self.label_14 = QLabel(self.frame_12)
        self.label_14.setObjectName(u"label_14")
        self.label_14.setFont(font5)
        self.label_14.setStyleSheet(u"color: #fff;")

        self.verticalLayout_18.addWidget(self.label_14)

        self.priceInput = QLineEdit(self.frame_12)
        self.priceInput.setObjectName(u"priceInput")
        sizePolicy4 = QSizePolicy(QSizePolicy.Minimum, QSizePolicy.Fixed)
        sizePolicy4.setHorizontalStretch(0)
        sizePolicy4.setVerticalStretch(0)
        sizePolicy4.setHeightForWidth(self.priceInput.sizePolicy().hasHeightForWidth())
        self.priceInput.setSizePolicy(sizePolicy4)
        self.priceInput.setMinimumSize(QSize(0, 0))
        self.priceInput.setFont(font6)

        self.verticalLayout_18.addWidget(self.priceInput)


        self.horizontalLayout_9.addWidget(self.frame_12)

        self.frame_9 = QFrame(self.widget_3)
        self.frame_9.setObjectName(u"frame_9")
        self.frame_9.setFrameShape(QFrame.StyledPanel)
        self.frame_9.setFrameShadow(QFrame.Raised)
        self.verticalLayout_15 = QVBoxLayout(self.frame_9)
        self.verticalLayout_15.setObjectName(u"verticalLayout_15")
        self.verticalLayout_15.setContentsMargins(-1, -1, -1, 12)
        self.refreshCombo_btn = QPushButton(self.frame_9)
        self.refreshCombo_btn.setObjectName(u"refreshCombo_btn")
        self.refreshCombo_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.refreshCombo_btn.setStyleSheet(u"#refreshCombo_btn:hover{\n"
"	border-bottom: 3px solid rgb(255, 139, 19)\n"
"}")
        icon6 = QIcon()
        icon6.addFile(u"resource/refresh.png", QSize(), QIcon.Normal, QIcon.Off)
        self.refreshCombo_btn.setIcon(icon6)
        self.refreshCombo_btn.setIconSize(QSize(25, 25))

        self.verticalLayout_15.addWidget(self.refreshCombo_btn, 0, Qt.AlignBottom)


        self.horizontalLayout_9.addWidget(self.frame_9, 0, Qt.AlignBottom)


        self.verticalLayout_20.addWidget(self.widget_3, 0, Qt.AlignLeft|Qt.AlignTop)

        self.widget_6 = QWidget(self.WrapProduct)
        self.widget_6.setObjectName(u"widget_6")
        sizePolicy2.setHeightForWidth(self.widget_6.sizePolicy().hasHeightForWidth())
        self.widget_6.setSizePolicy(sizePolicy2)
        self.horizontalLayout_13 = QHBoxLayout(self.widget_6)
        self.horizontalLayout_13.setObjectName(u"horizontalLayout_13")
        self.frame_16 = QFrame(self.widget_6)
        self.frame_16.setObjectName(u"frame_16")
        self.frame_16.setFrameShape(QFrame.StyledPanel)
        self.frame_16.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_14 = QHBoxLayout(self.frame_16)
        self.horizontalLayout_14.setObjectName(u"horizontalLayout_14")
        self.horizontalLayout_14.setContentsMargins(0, 0, 0, 0)
        self.addProduct_btn = QPushButton(self.frame_16)
        self.addProduct_btn.setObjectName(u"addProduct_btn")
        sizePolicy4.setHeightForWidth(self.addProduct_btn.sizePolicy().hasHeightForWidth())
        self.addProduct_btn.setSizePolicy(sizePolicy4)
        self.addProduct_btn.setMinimumSize(QSize(75, 30))
        self.addProduct_btn.setMaximumSize(QSize(0, 0))
        self.addProduct_btn.setFont(font3)
        self.addProduct_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.addProduct_btn.setFlat(True)

        self.horizontalLayout_14.addWidget(self.addProduct_btn, 0, Qt.AlignTop)


        self.horizontalLayout_13.addWidget(self.frame_16, 0, Qt.AlignHCenter|Qt.AlignTop)

        self.frame_17 = QFrame(self.widget_6)
        self.frame_17.setObjectName(u"frame_17")
        self.frame_17.setFrameShape(QFrame.StyledPanel)
        self.frame_17.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_15 = QHBoxLayout(self.frame_17)
        self.horizontalLayout_15.setObjectName(u"horizontalLayout_15")
        self.horizontalLayout_15.setContentsMargins(0, 0, 0, 0)
        self.clearProduct_btn = QPushButton(self.frame_17)
        self.clearProduct_btn.setObjectName(u"clearProduct_btn")
        sizePolicy4.setHeightForWidth(self.clearProduct_btn.sizePolicy().hasHeightForWidth())
        self.clearProduct_btn.setSizePolicy(sizePolicy4)
        self.clearProduct_btn.setMinimumSize(QSize(75, 30))
        self.clearProduct_btn.setMaximumSize(QSize(0, 0))
        self.clearProduct_btn.setFont(font3)
        self.clearProduct_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.clearProduct_btn.setFlat(True)

        self.horizontalLayout_15.addWidget(self.clearProduct_btn, 0, Qt.AlignTop)


        self.horizontalLayout_13.addWidget(self.frame_17)

        self.frame_18 = QFrame(self.widget_6)
        self.frame_18.setObjectName(u"frame_18")
        self.frame_18.setFrameShape(QFrame.StyledPanel)
        self.frame_18.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_16 = QHBoxLayout(self.frame_18)
        self.horizontalLayout_16.setSpacing(0)
        self.horizontalLayout_16.setObjectName(u"horizontalLayout_16")
        self.horizontalLayout_16.setContentsMargins(0, 0, 0, 0)
        self.generateBill_btn = QPushButton(self.frame_18)
        self.generateBill_btn.setObjectName(u"generateBill_btn")
        sizePolicy4.setHeightForWidth(self.generateBill_btn.sizePolicy().hasHeightForWidth())
        self.generateBill_btn.setSizePolicy(sizePolicy4)
        self.generateBill_btn.setMinimumSize(QSize(75, 30))
        self.generateBill_btn.setMaximumSize(QSize(0, 0))
        self.generateBill_btn.setFont(font3)
        self.generateBill_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.generateBill_btn.setStyleSheet(u"#generateBill_btn{\n"
"	background-color: #1f59d6;\n"
"	border-radius: 10px;\n"
"	color: rgb(221, 221, 221);\n"
"}\n"
"#generateBill_btn:hover{\n"
"	border: 1px solid #1f59d6;\n"
"    background-color: rgb(19, 19, 21);\n"
"	border-radius: 10px;\n"
"	color: #1f59d6;\n"
"}\n"
"")
        self.generateBill_btn.setFlat(True)

        self.horizontalLayout_16.addWidget(self.generateBill_btn, 0, Qt.AlignLeft|Qt.AlignTop)


        self.horizontalLayout_13.addWidget(self.frame_18)


        self.verticalLayout_20.addWidget(self.widget_6, 0, Qt.AlignLeft|Qt.AlignTop)

        self.Total = QLabel(self.WrapProduct)
        self.Total.setObjectName(u"Total")
        self.Total.setMinimumSize(QSize(150, 0))
        self.Total.setMaximumSize(QSize(16777215, 16777215))
        self.Total.setFont(font3)
        self.Total.setStyleSheet(u"#Total{\n"
"	padding: 4px;\n"
"	color: #fff;\n"
"	background-color: rgb(255, 139, 19);\n"
"\n"
"}")
        self.Total.setFrameShape(QFrame.NoFrame)
        self.Total.setWordWrap(True)

        self.verticalLayout_20.addWidget(self.Total, 0, Qt.AlignRight)


        self.verticalLayout_14.addWidget(self.WrapProduct)

        self.widget_7 = QWidget(self.scrollAreaWidgetContents)
        self.widget_7.setObjectName(u"widget_7")
        sizePolicy3.setHeightForWidth(self.widget_7.sizePolicy().hasHeightForWidth())
        self.widget_7.setSizePolicy(sizePolicy3)
        self.widget_7.setMinimumSize(QSize(0, 0))
        self.verticalLayout_24 = QVBoxLayout(self.widget_7)
        self.verticalLayout_24.setObjectName(u"verticalLayout_24")
        self.verticalLayout_24.setContentsMargins(0, 0, 0, 0)
        self.frame_15 = QFrame(self.widget_7)
        self.frame_15.setObjectName(u"frame_15")
        sizePolicy3.setHeightForWidth(self.frame_15.sizePolicy().hasHeightForWidth())
        self.frame_15.setSizePolicy(sizePolicy3)
        self.frame_15.setMinimumSize(QSize(0, 0))
        self.frame_15.setFrameShape(QFrame.StyledPanel)
        self.frame_15.setFrameShadow(QFrame.Raised)
        self.verticalLayout_25 = QVBoxLayout(self.frame_15)
        self.verticalLayout_25.setObjectName(u"verticalLayout_25")
        self.productTable = QTableWidget(self.frame_15)
        if (self.productTable.columnCount() < 5):
            self.productTable.setColumnCount(5)
        self.productTable.setObjectName(u"productTable")
        sizePolicy3.setHeightForWidth(self.productTable.sizePolicy().hasHeightForWidth())
        self.productTable.setSizePolicy(sizePolicy3)
        self.productTable.setMinimumSize(QSize(0, 0))
        font7 = QFont()
        font7.setFamilies([u"Prompt"])
        font7.setPointSize(10)
        font7.setBold(False)
        self.productTable.setFont(font7)
        self.productTable.setFrameShadow(QFrame.Plain)
        self.productTable.setDragEnabled(False)
        self.productTable.setShowGrid(False)
        self.productTable.setWordWrap(True)
        self.productTable.setCornerButtonEnabled(True)
        self.productTable.setRowCount(0)
        self.productTable.setColumnCount(5)
        self.productTable.horizontalHeader().setVisible(True)
        self.productTable.horizontalHeader().setProperty("showSortIndicator", True)
        self.productTable.verticalHeader().setProperty("showSortIndicator", True)
        self.productTable.verticalHeader().setStretchLastSection(False)

        self.verticalLayout_25.addWidget(self.productTable, 0, Qt.AlignTop)


        self.verticalLayout_24.addWidget(self.frame_15, 0, Qt.AlignTop)


        self.verticalLayout_14.addWidget(self.widget_7, 0, Qt.AlignTop)

        self.scrollArea.setWidget(self.scrollAreaWidgetContents)

        self.verticalLayout_4.addWidget(self.scrollArea)


        self.horizontalLayout_6.addWidget(self.wrapForm)

        self.widget_5 = QWidget(self.bill_page)
        self.widget_5.setObjectName(u"widget_5")
        sizePolicy.setHeightForWidth(self.widget_5.sizePolicy().hasHeightForWidth())
        self.widget_5.setSizePolicy(sizePolicy)
        self.widget_5.setMinimumSize(QSize(3, 500))
        self.widget_5.setMaximumSize(QSize(3, 2000))
        self.horizontalLayout_12 = QHBoxLayout(self.widget_5)
        self.horizontalLayout_12.setObjectName(u"horizontalLayout_12")
        self.horizontalLayout_12.setContentsMargins(0, 0, 0, 0)
        self.line_3 = QFrame(self.widget_5)
        self.line_3.setObjectName(u"line_3")
        sizePolicy3.setHeightForWidth(self.line_3.sizePolicy().hasHeightForWidth())
        self.line_3.setSizePolicy(sizePolicy3)
        self.line_3.setFrameShape(QFrame.VLine)
        self.line_3.setFrameShadow(QFrame.Sunken)

        self.horizontalLayout_12.addWidget(self.line_3)


        self.horizontalLayout_6.addWidget(self.widget_5, 0, Qt.AlignVCenter)

        self.wrapBillForm = QWidget(self.bill_page)
        self.wrapBillForm.setObjectName(u"wrapBillForm")
        self.verticalLayout_13 = QVBoxLayout(self.wrapBillForm)
        self.verticalLayout_13.setObjectName(u"verticalLayout_13")
        self.scrollArea_2 = QScrollArea(self.wrapBillForm)
        self.scrollArea_2.setObjectName(u"scrollArea_2")
        self.scrollArea_2.setWidgetResizable(True)
        self.scrollAreaWidgetContents_2 = QWidget()
        self.scrollAreaWidgetContents_2.setObjectName(u"scrollAreaWidgetContents_2")
        self.scrollAreaWidgetContents_2.setGeometry(QRect(0, 0, 788, 1125))
        self.verticalLayout_23 = QVBoxLayout(self.scrollAreaWidgetContents_2)
        self.verticalLayout_23.setObjectName(u"verticalLayout_23")
        self.wrapTools = QWidget(self.scrollAreaWidgetContents_2)
        self.wrapTools.setObjectName(u"wrapTools")
        sizePolicy1.setHeightForWidth(self.wrapTools.sizePolicy().hasHeightForWidth())
        self.wrapTools.setSizePolicy(sizePolicy1)
        self.wrapTools.setStyleSheet(u"#wrapTools{\n"
"	background-color: rgb(43, 45, 49);\n"
"	border-radius: 15px;\n"
"}")
        self.horizontalLayout_17 = QHBoxLayout(self.wrapTools)
        self.horizontalLayout_17.setObjectName(u"horizontalLayout_17")
        self.frame_19 = QFrame(self.wrapTools)
        self.frame_19.setObjectName(u"frame_19")
        self.frame_19.setFrameShape(QFrame.StyledPanel)
        self.frame_19.setFrameShadow(QFrame.Raised)
        self.verticalLayout_27 = QVBoxLayout(self.frame_19)
        self.verticalLayout_27.setObjectName(u"verticalLayout_27")
        self.printForm_btn = QPushButton(self.frame_19)
        self.printForm_btn.setObjectName(u"printForm_btn")
        sizePolicy4.setHeightForWidth(self.printForm_btn.sizePolicy().hasHeightForWidth())
        self.printForm_btn.setSizePolicy(sizePolicy4)
        self.printForm_btn.setFont(font3)
        self.printForm_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.printForm_btn.setStyleSheet(u"")
        icon7 = QIcon()
        icon7.addFile(u"resource/printer.png", QSize(), QIcon.Normal, QIcon.Off)
        self.printForm_btn.setIcon(icon7)
        self.printForm_btn.setIconSize(QSize(25, 25))

        self.verticalLayout_27.addWidget(self.printForm_btn, 0, Qt.AlignLeft)


        self.horizontalLayout_17.addWidget(self.frame_19, 0, Qt.AlignLeft)

        self.frame_20 = QFrame(self.wrapTools)
        self.frame_20.setObjectName(u"frame_20")
        self.frame_20.setFrameShape(QFrame.StyledPanel)
        self.frame_20.setFrameShadow(QFrame.Raised)
        self.verticalLayout_28 = QVBoxLayout(self.frame_20)
        self.verticalLayout_28.setObjectName(u"verticalLayout_28")
        self.refreshForm = QPushButton(self.frame_20)
        self.refreshForm.setObjectName(u"refreshForm")
        self.refreshForm.setCursor(QCursor(Qt.PointingHandCursor))
        self.refreshForm.setIcon(icon6)
        self.refreshForm.setIconSize(QSize(25, 25))

        self.verticalLayout_28.addWidget(self.refreshForm)


        self.horizontalLayout_17.addWidget(self.frame_20, 0, Qt.AlignLeft)

        self.typePageSelector = QComboBox(self.wrapTools)
        self.typePageSelector.setObjectName(u"typePageSelector")
        self.typePageSelector.setFont(font4)
        self.typePageSelector.setStyleSheet(u"#typePageSelector{\n"
"	\n"
"	\n"
"	background-color: rgb(43, 45, 49);\n"
"	color: rgb(255, 255, 255);\n"
"}")

        self.horizontalLayout_17.addWidget(self.typePageSelector)


        self.verticalLayout_23.addWidget(self.wrapTools, 0, Qt.AlignLeft)

        self.formContainer = QWidget(self.scrollAreaWidgetContents_2)
        self.formContainer.setObjectName(u"formContainer")
        sizePolicy3.setHeightForWidth(self.formContainer.sizePolicy().hasHeightForWidth())
        self.formContainer.setSizePolicy(sizePolicy3)
        self.verticalLayout_26 = QVBoxLayout(self.formContainer)
        self.verticalLayout_26.setSpacing(10)
        self.verticalLayout_26.setObjectName(u"verticalLayout_26")
        self.verticalLayout_26.setContentsMargins(10, 10, 10, 10)
        self.showPDF = QWidget(self.formContainer)
        self.showPDF.setObjectName(u"showPDF")
        self.showPDF.setMinimumSize(QSize(750, 1000))
        self.showPDF.setStyleSheet(u"")

        self.verticalLayout_26.addWidget(self.showPDF)


        self.verticalLayout_23.addWidget(self.formContainer)

        self.scrollArea_2.setWidget(self.scrollAreaWidgetContents_2)

        self.verticalLayout_13.addWidget(self.scrollArea_2)

        self.widget_10 = QWidget(self.wrapBillForm)
        self.widget_10.setObjectName(u"widget_10")

        self.verticalLayout_13.addWidget(self.widget_10)


        self.horizontalLayout_6.addWidget(self.wrapBillForm)

        self.stackPages.addWidget(self.bill_page)
        self.customer_page = QWidget()
        self.customer_page.setObjectName(u"customer_page")
        self.verticalLayout_5 = QVBoxLayout(self.customer_page)
        self.verticalLayout_5.setObjectName(u"verticalLayout_5")
        self.scrollArea_3 = QScrollArea(self.customer_page)
        self.scrollArea_3.setObjectName(u"scrollArea_3")
        self.scrollArea_3.setWidgetResizable(True)
        self.scrollAreaWidgetContents_3 = QWidget()
        self.scrollAreaWidgetContents_3.setObjectName(u"scrollAreaWidgetContents_3")
        self.scrollAreaWidgetContents_3.setGeometry(QRect(0, 0, 1114, 577))
        self.verticalLayout_29 = QVBoxLayout(self.scrollAreaWidgetContents_3)
        self.verticalLayout_29.setSpacing(0)
        self.verticalLayout_29.setObjectName(u"verticalLayout_29")
        self.verticalLayout_29.setContentsMargins(0, 0, 0, 0)
        self.customerContainer = QWidget(self.scrollAreaWidgetContents_3)
        self.customerContainer.setObjectName(u"customerContainer")
        sizePolicy3.setHeightForWidth(self.customerContainer.sizePolicy().hasHeightForWidth())
        self.customerContainer.setSizePolicy(sizePolicy3)
        self.customerContainer.setMinimumSize(QSize(0, 0))
        self.customerContainer.setStyleSheet(u"#customerContainer{\n"
"	background-color: rgb(18, 18, 18);\n"
"	border-radius: 20px;\n"
"}\n"
"QLineEdit{\n"
"	padding: 3px;\n"
"}")
        self.verticalLayout_35 = QVBoxLayout(self.customerContainer)
        self.verticalLayout_35.setObjectName(u"verticalLayout_35")
        self.widget_8 = QWidget(self.customerContainer)
        self.widget_8.setObjectName(u"widget_8")
        self.verticalLayout_30 = QVBoxLayout(self.widget_8)
        self.verticalLayout_30.setObjectName(u"verticalLayout_30")
        self.frame_21 = QFrame(self.widget_8)
        self.frame_21.setObjectName(u"frame_21")
        self.frame_21.setFrameShape(QFrame.StyledPanel)
        self.frame_21.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_18 = QHBoxLayout(self.frame_21)
        self.horizontalLayout_18.setObjectName(u"horizontalLayout_18")
        self.label_17 = QLabel(self.frame_21)
        self.label_17.setObjectName(u"label_17")
        self.label_17.setFont(font2)
        self.label_17.setStyleSheet(u"color: #fff;")

        self.horizontalLayout_18.addWidget(self.label_17)

        self.line_4 = QFrame(self.frame_21)
        self.line_4.setObjectName(u"line_4")
        sizePolicy1.setHeightForWidth(self.line_4.sizePolicy().hasHeightForWidth())
        self.line_4.setSizePolicy(sizePolicy1)
        self.line_4.setMinimumSize(QSize(0, 3))
        self.line_4.setMaximumSize(QSize(16777215, 10))
        self.line_4.setFrameShape(QFrame.StyledPanel)
        self.line_4.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_18.addWidget(self.line_4, 0, Qt.AlignVCenter)


        self.verticalLayout_30.addWidget(self.frame_21, 0, Qt.AlignTop)

        self.widget_11 = QWidget(self.widget_8)
        self.widget_11.setObjectName(u"widget_11")
        self.horizontalLayout_19 = QHBoxLayout(self.widget_11)
        self.horizontalLayout_19.setObjectName(u"horizontalLayout_19")
        self.horizontalLayout_19.setContentsMargins(-1, -1, -1, 0)
        self.frame_22 = QFrame(self.widget_11)
        self.frame_22.setObjectName(u"frame_22")
        self.frame_22.setFrameShape(QFrame.StyledPanel)
        self.frame_22.setFrameShadow(QFrame.Raised)
        self.verticalLayout_31 = QVBoxLayout(self.frame_22)
        self.verticalLayout_31.setObjectName(u"verticalLayout_31")
        self.label_18 = QLabel(self.frame_22)
        self.label_18.setObjectName(u"label_18")
        self.label_18.setFont(font3)
        self.label_18.setStyleSheet(u"color: #fff;")

        self.verticalLayout_31.addWidget(self.label_18)

        self.dbCustomerName = QLineEdit(self.frame_22)
        self.dbCustomerName.setObjectName(u"dbCustomerName")
        self.dbCustomerName.setFont(font6)

        self.verticalLayout_31.addWidget(self.dbCustomerName)


        self.horizontalLayout_19.addWidget(self.frame_22)

        self.frame_23 = QFrame(self.widget_11)
        self.frame_23.setObjectName(u"frame_23")
        self.frame_23.setFrameShape(QFrame.StyledPanel)
        self.frame_23.setFrameShadow(QFrame.Raised)
        self.verticalLayout_32 = QVBoxLayout(self.frame_23)
        self.verticalLayout_32.setObjectName(u"verticalLayout_32")
        self.label_19 = QLabel(self.frame_23)
        self.label_19.setObjectName(u"label_19")
        self.label_19.setFont(font5)
        self.label_19.setStyleSheet(u"color: #fff;")

        self.verticalLayout_32.addWidget(self.label_19)

        self.dbAddressInput = QLineEdit(self.frame_23)
        self.dbAddressInput.setObjectName(u"dbAddressInput")
        self.dbAddressInput.setFont(font6)

        self.verticalLayout_32.addWidget(self.dbAddressInput)


        self.horizontalLayout_19.addWidget(self.frame_23)

        self.frame_24 = QFrame(self.widget_11)
        self.frame_24.setObjectName(u"frame_24")
        self.frame_24.setFrameShape(QFrame.StyledPanel)
        self.frame_24.setFrameShadow(QFrame.Raised)
        self.verticalLayout_33 = QVBoxLayout(self.frame_24)
        self.verticalLayout_33.setObjectName(u"verticalLayout_33")
        self.label_3 = QLabel(self.frame_24)
        self.label_3.setObjectName(u"label_3")
        self.label_3.setFont(font3)
        self.label_3.setStyleSheet(u"color: rgb(255, 255, 255);")

        self.verticalLayout_33.addWidget(self.label_3)

        self.dbCustomerCountry = QComboBox(self.frame_24)
        self.dbCustomerCountry.setObjectName(u"dbCustomerCountry")
        self.dbCustomerCountry.setMinimumSize(QSize(150, 0))
        self.dbCustomerCountry.setFont(font4)

        self.verticalLayout_33.addWidget(self.dbCustomerCountry)


        self.horizontalLayout_19.addWidget(self.frame_24)

        self.frame_25 = QFrame(self.widget_11)
        self.frame_25.setObjectName(u"frame_25")
        self.frame_25.setFrameShape(QFrame.StyledPanel)
        self.frame_25.setFrameShadow(QFrame.Raised)
        self.verticalLayout_34 = QVBoxLayout(self.frame_25)
        self.verticalLayout_34.setObjectName(u"verticalLayout_34")
        self.label_20 = QLabel(self.frame_25)
        self.label_20.setObjectName(u"label_20")
        self.label_20.setFont(font3)
        self.label_20.setStyleSheet(u"color: rgb(255, 255, 255);")

        self.verticalLayout_34.addWidget(self.label_20)

        self.dbContactInput = QLineEdit(self.frame_25)
        self.dbContactInput.setObjectName(u"dbContactInput")
        self.dbContactInput.setFont(font6)

        self.verticalLayout_34.addWidget(self.dbContactInput)


        self.horizontalLayout_19.addWidget(self.frame_25)

        self.frame_29 = QFrame(self.widget_11)
        self.frame_29.setObjectName(u"frame_29")
        self.frame_29.setFrameShape(QFrame.StyledPanel)
        self.frame_29.setFrameShadow(QFrame.Raised)
        self.verticalLayout_39 = QVBoxLayout(self.frame_29)
        self.verticalLayout_39.setObjectName(u"verticalLayout_39")
        self.label_22 = QLabel(self.frame_29)
        self.label_22.setObjectName(u"label_22")
        self.label_22.setFont(font3)
        self.label_22.setStyleSheet(u"color: rgb(255, 255, 255);")

        self.verticalLayout_39.addWidget(self.label_22)

        self.dbHaveBoughtInput = QLineEdit(self.frame_29)
        self.dbHaveBoughtInput.setObjectName(u"dbHaveBoughtInput")
        self.dbHaveBoughtInput.setFont(font6)

        self.verticalLayout_39.addWidget(self.dbHaveBoughtInput)


        self.horizontalLayout_19.addWidget(self.frame_29)

        self.frame_30 = QFrame(self.widget_11)
        self.frame_30.setObjectName(u"frame_30")
        self.frame_30.setFrameShape(QFrame.StyledPanel)
        self.frame_30.setFrameShadow(QFrame.Raised)
        self.verticalLayout_40 = QVBoxLayout(self.frame_30)
        self.verticalLayout_40.setObjectName(u"verticalLayout_40")
        self.label_23 = QLabel(self.frame_30)
        self.label_23.setObjectName(u"label_23")
        self.label_23.setFont(font3)
        self.label_23.setStyleSheet(u"color: rgb(255, 255, 255);")

        self.verticalLayout_40.addWidget(self.label_23)

        self.dbHistoryInput = QLineEdit(self.frame_30)
        self.dbHistoryInput.setObjectName(u"dbHistoryInput")
        self.dbHistoryInput.setFont(font6)

        self.verticalLayout_40.addWidget(self.dbHistoryInput)


        self.horizontalLayout_19.addWidget(self.frame_30)


        self.verticalLayout_30.addWidget(self.widget_11)

        self.widget_9 = QWidget(self.widget_8)
        self.widget_9.setObjectName(u"widget_9")
        self.horizontalLayout_20 = QHBoxLayout(self.widget_9)
        self.horizontalLayout_20.setObjectName(u"horizontalLayout_20")
        self.horizontalLayout_20.setContentsMargins(-1, 0, -1, 0)
        self.frame_26 = QFrame(self.widget_9)
        self.frame_26.setObjectName(u"frame_26")
        self.frame_26.setFrameShape(QFrame.StyledPanel)
        self.frame_26.setFrameShadow(QFrame.Raised)
        self.verticalLayout_36 = QVBoxLayout(self.frame_26)
        self.verticalLayout_36.setObjectName(u"verticalLayout_36")
        self.verticalLayout_36.setContentsMargins(-1, 0, -1, 0)
        self.addDB_btn = QPushButton(self.frame_26)
        self.addDB_btn.setObjectName(u"addDB_btn")
        self.addDB_btn.setFont(font3)
        self.addDB_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.addDB_btn.setStyleSheet(u"#addDB_btn{\n"
"	background-color: #2ecc71;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    padding: 8px 10px;\n"
"}\n"
"\n"
"#addDB_btn:hover {\n"
"    background-color: transparent;\n"
"	border: 1px solid #2ecc71;\n"
"	color: #2ecc71;\n"
"}\n"
"#addDB_btn:pressed{\n"
"	background-color: #2ecc71;\n"
"	color: white;\n"
"}")
        icon8 = QIcon()
        icon8.addFile(u"resource/plus.png", QSize(), QIcon.Normal, QIcon.Off)
        self.addDB_btn.setIcon(icon8)

        self.verticalLayout_36.addWidget(self.addDB_btn, 0, Qt.AlignLeft)


        self.horizontalLayout_20.addWidget(self.frame_26, 0, Qt.AlignLeft)

        self.frame_31 = QFrame(self.widget_9)
        self.frame_31.setObjectName(u"frame_31")
        self.frame_31.setFrameShape(QFrame.StyledPanel)
        self.frame_31.setFrameShadow(QFrame.Raised)
        self.verticalLayout_41 = QVBoxLayout(self.frame_31)
        self.verticalLayout_41.setObjectName(u"verticalLayout_41")
        self.verticalLayout_41.setContentsMargins(0, -1, -1, -1)
        self.editDB_btn = QPushButton(self.frame_31)
        self.editDB_btn.setObjectName(u"editDB_btn")
        self.editDB_btn.setFont(font3)
        self.editDB_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.editDB_btn.setStyleSheet(u"#editDB_btn{\n"
"	background-color: rgb(255, 139, 19);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    padding: 8px 20px;\n"
"}\n"
"\n"
"#editDB_btn:hover {\n"
"    background-color: transparent;\n"
"	border: 1px solid rgb(255, 139, 19);\n"
"	color: rgb(255, 139, 19);\n"
"}\n"
"#editDB_btn:pressed{\n"
"	background-color: rgb(255, 179, 0);\n"
"	color: white;\n"
"}")
        icon9 = QIcon()
        icon9.addFile(u"resource/edit.png", QSize(), QIcon.Normal, QIcon.Off)
        self.editDB_btn.setIcon(icon9)

        self.verticalLayout_41.addWidget(self.editDB_btn)


        self.horizontalLayout_20.addWidget(self.frame_31)

        self.frame_32 = QFrame(self.widget_9)
        self.frame_32.setObjectName(u"frame_32")
        self.frame_32.setFrameShape(QFrame.StyledPanel)
        self.frame_32.setFrameShadow(QFrame.Raised)
        self.verticalLayout_42 = QVBoxLayout(self.frame_32)
        self.verticalLayout_42.setObjectName(u"verticalLayout_42")
        self.verticalLayout_42.setContentsMargins(0, -1, -1, -1)
        self.clearDB_btn = QPushButton(self.frame_32)
        self.clearDB_btn.setObjectName(u"clearDB_btn")
        self.clearDB_btn.setFont(font3)
        self.clearDB_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.clearDB_btn.setStyleSheet(u"#clearDB_btn{\n"
"	background-color: rgb(223, 0, 33);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    padding: 8px 20px;\n"
"}\n"
"\n"
"#clearDB_btn:hover {\n"
"    background-color: transparent;\n"
"	border: 1px solid rgb(223, 0, 33);\n"
"	color: rgb(223, 0, 33);\n"
"}\n"
"#clearDB_btn:pressed{\n"
"	\n"
"	background-color: rgb(254, 0, 38);\n"
"	color: white;\n"
"}")
        icon10 = QIcon()
        icon10.addFile(u"resource/bin.png", QSize(), QIcon.Normal, QIcon.Off)
        self.clearDB_btn.setIcon(icon10)

        self.verticalLayout_42.addWidget(self.clearDB_btn, 0, Qt.AlignLeft)


        self.horizontalLayout_20.addWidget(self.frame_32, 0, Qt.AlignLeft)


        self.verticalLayout_30.addWidget(self.widget_9, 0, Qt.AlignLeft)


        self.verticalLayout_35.addWidget(self.widget_8, 0, Qt.AlignTop)

        self.widget_12 = QWidget(self.customerContainer)
        self.widget_12.setObjectName(u"widget_12")
        self.verticalLayout_37 = QVBoxLayout(self.widget_12)
        self.verticalLayout_37.setObjectName(u"verticalLayout_37")
        self.frame_27 = QFrame(self.widget_12)
        self.frame_27.setObjectName(u"frame_27")
        self.frame_27.setFrameShape(QFrame.StyledPanel)
        self.frame_27.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_27 = QHBoxLayout(self.frame_27)
        self.horizontalLayout_27.setObjectName(u"horizontalLayout_27")
        self.line_10 = QFrame(self.frame_27)
        self.line_10.setObjectName(u"line_10")
        sizePolicy1.setHeightForWidth(self.line_10.sizePolicy().hasHeightForWidth())
        self.line_10.setSizePolicy(sizePolicy1)
        self.line_10.setMinimumSize(QSize(0, 3))
        self.line_10.setMaximumSize(QSize(16777215, 3))
        self.line_10.setFrameShape(QFrame.StyledPanel)
        self.line_10.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_27.addWidget(self.line_10)

        self.label_21 = QLabel(self.frame_27)
        self.label_21.setObjectName(u"label_21")
        self.label_21.setFont(font2)
        self.label_21.setStyleSheet(u"color: #fff;")

        self.horizontalLayout_27.addWidget(self.label_21)

        self.line_5 = QFrame(self.frame_27)
        self.line_5.setObjectName(u"line_5")
        sizePolicy1.setHeightForWidth(self.line_5.sizePolicy().hasHeightForWidth())
        self.line_5.setSizePolicy(sizePolicy1)
        self.line_5.setMinimumSize(QSize(0, 3))
        self.line_5.setMaximumSize(QSize(16777215, 3))
        self.line_5.setFrameShape(QFrame.StyledPanel)
        self.line_5.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_27.addWidget(self.line_5)


        self.verticalLayout_37.addWidget(self.frame_27)

        self.frame_28 = QFrame(self.widget_12)
        self.frame_28.setObjectName(u"frame_28")
        self.frame_28.setFrameShape(QFrame.StyledPanel)
        self.frame_28.setFrameShadow(QFrame.Raised)
        self.verticalLayout_38 = QVBoxLayout(self.frame_28)
        self.verticalLayout_38.setObjectName(u"verticalLayout_38")
        self.customerTable = QTableWidget(self.frame_28)
        if (self.customerTable.columnCount() < 8):
            self.customerTable.setColumnCount(8)
        self.customerTable.setObjectName(u"customerTable")
        sizePolicy3.setHeightForWidth(self.customerTable.sizePolicy().hasHeightForWidth())
        self.customerTable.setSizePolicy(sizePolicy3)
        self.customerTable.setMinimumSize(QSize(0, 0))
        self.customerTable.setFont(font7)
        self.customerTable.setFrameShadow(QFrame.Plain)
        self.customerTable.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.customerTable.setDragEnabled(False)
        self.customerTable.setShowGrid(False)
        self.customerTable.setWordWrap(True)
        self.customerTable.setCornerButtonEnabled(True)
        self.customerTable.setRowCount(0)
        self.customerTable.setColumnCount(8)
        self.customerTable.horizontalHeader().setVisible(True)
        self.customerTable.horizontalHeader().setProperty("showSortIndicator", True)
        self.customerTable.verticalHeader().setProperty("showSortIndicator", True)
        self.customerTable.verticalHeader().setStretchLastSection(False)

        self.verticalLayout_38.addWidget(self.customerTable)


        self.verticalLayout_37.addWidget(self.frame_28)


        self.verticalLayout_35.addWidget(self.widget_12)


        self.verticalLayout_29.addWidget(self.customerContainer)

        self.scrollArea_3.setWidget(self.scrollAreaWidgetContents_3)

        self.verticalLayout_5.addWidget(self.scrollArea_3)

        self.stackPages.addWidget(self.customer_page)
        self.help_page = QWidget()
        self.help_page.setObjectName(u"help_page")
        self.verticalLayout_6 = QVBoxLayout(self.help_page)
        self.verticalLayout_6.setObjectName(u"verticalLayout_6")
        self.scrollArea_4 = QScrollArea(self.help_page)
        self.scrollArea_4.setObjectName(u"scrollArea_4")
        self.scrollArea_4.setWidgetResizable(True)
        self.scrollAreaWidgetContents_4 = QWidget()
        self.scrollAreaWidgetContents_4.setObjectName(u"scrollAreaWidgetContents_4")
        self.scrollAreaWidgetContents_4.setGeometry(QRect(0, 0, 1114, 577))
        self.verticalLayout_56 = QVBoxLayout(self.scrollAreaWidgetContents_4)
        self.verticalLayout_56.setObjectName(u"verticalLayout_56")
        self.verticalLayout_56.setContentsMargins(0, 0, 0, 0)
        self.productContainer = QWidget(self.scrollAreaWidgetContents_4)
        self.productContainer.setObjectName(u"productContainer")
        self.productContainer.setMinimumSize(QSize(0, 0))
        self.productContainer.setStyleSheet(u"#productContainer{\n"
"	background-color: rgb(18, 18, 18);\n"
"	border-radius: 20px;\n"
"}\n"
"QLineEdit{\n"
"	padding: 3px;\n"
"}")
        self.verticalLayout_43 = QVBoxLayout(self.productContainer)
        self.verticalLayout_43.setObjectName(u"verticalLayout_43")
        self.verticalLayout_43.setContentsMargins(9, 9, -1, -1)
        self.widget_13 = QWidget(self.productContainer)
        self.widget_13.setObjectName(u"widget_13")
        self.verticalLayout_44 = QVBoxLayout(self.widget_13)
        self.verticalLayout_44.setObjectName(u"verticalLayout_44")
        self.frame_33 = QFrame(self.widget_13)
        self.frame_33.setObjectName(u"frame_33")
        self.frame_33.setFrameShape(QFrame.StyledPanel)
        self.frame_33.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_22 = QHBoxLayout(self.frame_33)
        self.horizontalLayout_22.setObjectName(u"horizontalLayout_22")
        self.label_24 = QLabel(self.frame_33)
        self.label_24.setObjectName(u"label_24")
        self.label_24.setFont(font2)
        self.label_24.setStyleSheet(u"color: #fff;")

        self.horizontalLayout_22.addWidget(self.label_24)

        self.line_6 = QFrame(self.frame_33)
        self.line_6.setObjectName(u"line_6")
        sizePolicy1.setHeightForWidth(self.line_6.sizePolicy().hasHeightForWidth())
        self.line_6.setSizePolicy(sizePolicy1)
        self.line_6.setMinimumSize(QSize(0, 3))
        self.line_6.setMaximumSize(QSize(16777215, 3))
        self.line_6.setFrameShape(QFrame.StyledPanel)
        self.line_6.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_22.addWidget(self.line_6, 0, Qt.AlignVCenter)


        self.verticalLayout_44.addWidget(self.frame_33, 0, Qt.AlignTop)

        self.widget_14 = QWidget(self.widget_13)
        self.widget_14.setObjectName(u"widget_14")
        self.horizontalLayout_23 = QHBoxLayout(self.widget_14)
        self.horizontalLayout_23.setObjectName(u"horizontalLayout_23")
        self.horizontalLayout_23.setContentsMargins(-1, -1, -1, 0)
        self.frame_35 = QFrame(self.widget_14)
        self.frame_35.setObjectName(u"frame_35")
        self.frame_35.setFrameShape(QFrame.StyledPanel)
        self.frame_35.setFrameShadow(QFrame.Raised)
        self.verticalLayout_46 = QVBoxLayout(self.frame_35)
        self.verticalLayout_46.setObjectName(u"verticalLayout_46")
        self.label_26 = QLabel(self.frame_35)
        self.label_26.setObjectName(u"label_26")
        self.label_26.setFont(font5)
        self.label_26.setStyleSheet(u"color: #fff;")

        self.verticalLayout_46.addWidget(self.label_26)

        self.dbProductNameInput = QLineEdit(self.frame_35)
        self.dbProductNameInput.setObjectName(u"dbProductNameInput")
        self.dbProductNameInput.setFont(font6)

        self.verticalLayout_46.addWidget(self.dbProductNameInput)


        self.horizontalLayout_23.addWidget(self.frame_35)

        self.frame_37 = QFrame(self.widget_14)
        self.frame_37.setObjectName(u"frame_37")
        self.frame_37.setFrameShape(QFrame.StyledPanel)
        self.frame_37.setFrameShadow(QFrame.Raised)
        self.verticalLayout_48 = QVBoxLayout(self.frame_37)
        self.verticalLayout_48.setObjectName(u"verticalLayout_48")
        self.label_27 = QLabel(self.frame_37)
        self.label_27.setObjectName(u"label_27")
        self.label_27.setFont(font3)
        self.label_27.setStyleSheet(u"color: rgb(255, 255, 255);")

        self.verticalLayout_48.addWidget(self.label_27)

        self.dbProductPriceInput = QLineEdit(self.frame_37)
        self.dbProductPriceInput.setObjectName(u"dbProductPriceInput")
        self.dbProductPriceInput.setFont(font6)

        self.verticalLayout_48.addWidget(self.dbProductPriceInput)


        self.horizontalLayout_23.addWidget(self.frame_37)

        self.frame_38 = QFrame(self.widget_14)
        self.frame_38.setObjectName(u"frame_38")
        self.frame_38.setFrameShape(QFrame.StyledPanel)
        self.frame_38.setFrameShadow(QFrame.Raised)
        self.verticalLayout_49 = QVBoxLayout(self.frame_38)
        self.verticalLayout_49.setObjectName(u"verticalLayout_49")
        self.label_28 = QLabel(self.frame_38)
        self.label_28.setObjectName(u"label_28")
        self.label_28.setFont(font3)
        self.label_28.setStyleSheet(u"color: rgb(255, 255, 255);")

        self.verticalLayout_49.addWidget(self.label_28)

        self.dbProductStockInput = QLineEdit(self.frame_38)
        self.dbProductStockInput.setObjectName(u"dbProductStockInput")
        self.dbProductStockInput.setFont(font6)

        self.verticalLayout_49.addWidget(self.dbProductStockInput)


        self.horizontalLayout_23.addWidget(self.frame_38)


        self.verticalLayout_44.addWidget(self.widget_14)

        self.widget_15 = QWidget(self.widget_13)
        self.widget_15.setObjectName(u"widget_15")
        self.horizontalLayout_24 = QHBoxLayout(self.widget_15)
        self.horizontalLayout_24.setObjectName(u"horizontalLayout_24")
        self.horizontalLayout_24.setContentsMargins(-1, 0, -1, 0)
        self.frame_40 = QFrame(self.widget_15)
        self.frame_40.setObjectName(u"frame_40")
        self.frame_40.setFrameShape(QFrame.StyledPanel)
        self.frame_40.setFrameShadow(QFrame.Raised)
        self.verticalLayout_51 = QVBoxLayout(self.frame_40)
        self.verticalLayout_51.setObjectName(u"verticalLayout_51")
        self.verticalLayout_51.setContentsMargins(-1, 0, -1, 0)
        self.addProductDB_btn = QPushButton(self.frame_40)
        self.addProductDB_btn.setObjectName(u"addProductDB_btn")
        self.addProductDB_btn.setFont(font3)
        self.addProductDB_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.addProductDB_btn.setStyleSheet(u"#addProductDB_btn{\n"
"	background-color: #2ecc71;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    padding: 8px 10px;\n"
"}\n"
"\n"
"#addProductDB_btn:hover {\n"
"    background-color: transparent;\n"
"	border: 1px solid #2ecc71;\n"
"	color: #2ecc71;\n"
"}\n"
"#addProductDB_btn:pressed{\n"
"	background-color: #2ecc71;\n"
"	color: white;\n"
"}")
        icon11 = QIcon()
        icon11.addFile(u"../../Downloads/plus.png", QSize(), QIcon.Normal, QIcon.Off)
        self.addProductDB_btn.setIcon(icon11)

        self.verticalLayout_51.addWidget(self.addProductDB_btn, 0, Qt.AlignLeft)


        self.horizontalLayout_24.addWidget(self.frame_40, 0, Qt.AlignLeft)

        self.frame_41 = QFrame(self.widget_15)
        self.frame_41.setObjectName(u"frame_41")
        self.frame_41.setFrameShape(QFrame.StyledPanel)
        self.frame_41.setFrameShadow(QFrame.Raised)
        self.verticalLayout_52 = QVBoxLayout(self.frame_41)
        self.verticalLayout_52.setObjectName(u"verticalLayout_52")
        self.verticalLayout_52.setContentsMargins(0, -1, -1, -1)
        self.editProductDB_btn = QPushButton(self.frame_41)
        self.editProductDB_btn.setObjectName(u"editProductDB_btn")
        self.editProductDB_btn.setFont(font3)
        self.editProductDB_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.editProductDB_btn.setStyleSheet(u"#editProductDB_btn{\n"
"	background-color: rgb(255, 139, 19);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    padding: 8px 20px;\n"
"}\n"
"\n"
"#editProductDB_btn:hover {\n"
"    background-color: transparent;\n"
"	border: 1px solid rgb(255, 139, 19);\n"
"	color: rgb(255, 139, 19);\n"
"}\n"
"#editProductDB_btn:pressed{\n"
"	background-color: rgb(255, 179, 0);\n"
"	color: white;\n"
"}")
        icon12 = QIcon()
        icon12.addFile(u"../../Downloads/edit.png", QSize(), QIcon.Normal, QIcon.Off)
        self.editProductDB_btn.setIcon(icon12)

        self.verticalLayout_52.addWidget(self.editProductDB_btn)


        self.horizontalLayout_24.addWidget(self.frame_41)

        self.frame_42 = QFrame(self.widget_15)
        self.frame_42.setObjectName(u"frame_42")
        self.frame_42.setFrameShape(QFrame.StyledPanel)
        self.frame_42.setFrameShadow(QFrame.Raised)
        self.verticalLayout_53 = QVBoxLayout(self.frame_42)
        self.verticalLayout_53.setObjectName(u"verticalLayout_53")
        self.verticalLayout_53.setContentsMargins(0, -1, -1, -1)
        self.clearProductDB_btn = QPushButton(self.frame_42)
        self.clearProductDB_btn.setObjectName(u"clearProductDB_btn")
        self.clearProductDB_btn.setFont(font3)
        self.clearProductDB_btn.setCursor(QCursor(Qt.PointingHandCursor))
        self.clearProductDB_btn.setStyleSheet(u"#clearProductDB_btn{\n"
"	background-color: rgb(223, 0, 33);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    padding: 8px 20px;\n"
"}\n"
"\n"
"#clearProductDB_btn:hover {\n"
"    background-color: transparent;\n"
"	border: 1px solid rgb(223, 0, 33);\n"
"	color: rgb(223, 0, 33);\n"
"}\n"
"#clearProductDB_btn:pressed{\n"
"	background-color: rgb(254, 0, 38);\n"
"	color: white;\n"
"}")
        icon13 = QIcon()
        icon13.addFile(u"../../Downloads/bin.png", QSize(), QIcon.Normal, QIcon.Off)
        self.clearProductDB_btn.setIcon(icon13)

        self.verticalLayout_53.addWidget(self.clearProductDB_btn, 0, Qt.AlignLeft)


        self.horizontalLayout_24.addWidget(self.frame_42, 0, Qt.AlignLeft)


        self.verticalLayout_44.addWidget(self.widget_15, 0, Qt.AlignLeft)


        self.verticalLayout_43.addWidget(self.widget_13, 0, Qt.AlignTop)

        self.widget_16 = QWidget(self.productContainer)
        self.widget_16.setObjectName(u"widget_16")
        self.verticalLayout_54 = QVBoxLayout(self.widget_16)
        self.verticalLayout_54.setObjectName(u"verticalLayout_54")
        self.frame_43 = QFrame(self.widget_16)
        self.frame_43.setObjectName(u"frame_43")
        self.frame_43.setFrameShape(QFrame.StyledPanel)
        self.frame_43.setFrameShadow(QFrame.Raised)
        self.horizontalLayout_25 = QHBoxLayout(self.frame_43)
        self.horizontalLayout_25.setObjectName(u"horizontalLayout_25")
        self.line_11 = QFrame(self.frame_43)
        self.line_11.setObjectName(u"line_11")
        sizePolicy1.setHeightForWidth(self.line_11.sizePolicy().hasHeightForWidth())
        self.line_11.setSizePolicy(sizePolicy1)
        self.line_11.setMinimumSize(QSize(0, 3))
        self.line_11.setMaximumSize(QSize(16777215, 3))
        self.line_11.setFrameShape(QFrame.StyledPanel)
        self.line_11.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_25.addWidget(self.line_11)

        self.label_30 = QLabel(self.frame_43)
        self.label_30.setObjectName(u"label_30")
        self.label_30.setFont(font2)
        self.label_30.setStyleSheet(u"color: #fff;")

        self.horizontalLayout_25.addWidget(self.label_30)

        self.line_7 = QFrame(self.frame_43)
        self.line_7.setObjectName(u"line_7")
        sizePolicy1.setHeightForWidth(self.line_7.sizePolicy().hasHeightForWidth())
        self.line_7.setSizePolicy(sizePolicy1)
        self.line_7.setMinimumSize(QSize(0, 3))
        self.line_7.setMaximumSize(QSize(16777215, 3))
        self.line_7.setFrameShape(QFrame.StyledPanel)
        self.line_7.setFrameShadow(QFrame.Raised)

        self.horizontalLayout_25.addWidget(self.line_7)


        self.verticalLayout_54.addWidget(self.frame_43, 0, Qt.AlignTop)


        self.verticalLayout_43.addWidget(self.widget_16, 0, Qt.AlignTop)

        self.frame_34 = QFrame(self.productContainer)
        self.frame_34.setObjectName(u"frame_34")
        self.frame_34.setFrameShape(QFrame.StyledPanel)
        self.frame_34.setFrameShadow(QFrame.Raised)
        self.verticalLayout_45 = QVBoxLayout(self.frame_34)
        self.verticalLayout_45.setSpacing(6)
        self.verticalLayout_45.setObjectName(u"verticalLayout_45")
        self.verticalLayout_45.setContentsMargins(15, -1, -1, -1)
        self.productDBTable = QTableWidget(self.frame_34)
        if (self.productDBTable.columnCount() < 5):
            self.productDBTable.setColumnCount(5)
        self.productDBTable.setObjectName(u"productDBTable")
        sizePolicy3.setHeightForWidth(self.productDBTable.sizePolicy().hasHeightForWidth())
        self.productDBTable.setSizePolicy(sizePolicy3)
        self.productDBTable.setMinimumSize(QSize(0, 0))
        self.productDBTable.setFont(font7)
        self.productDBTable.setFrameShadow(QFrame.Plain)
        self.productDBTable.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.productDBTable.setDragEnabled(False)
        self.productDBTable.setShowGrid(False)
        self.productDBTable.setWordWrap(True)
        self.productDBTable.setCornerButtonEnabled(True)
        self.productDBTable.setRowCount(0)
        self.productDBTable.setColumnCount(5)
        self.productDBTable.horizontalHeader().setVisible(True)
        self.productDBTable.horizontalHeader().setProperty("showSortIndicator", True)
        self.productDBTable.verticalHeader().setProperty("showSortIndicator", True)
        self.productDBTable.verticalHeader().setStretchLastSection(False)

        self.verticalLayout_45.addWidget(self.productDBTable)


        self.verticalLayout_43.addWidget(self.frame_34)


        self.verticalLayout_56.addWidget(self.productContainer)

        self.scrollArea_4.setWidget(self.scrollAreaWidgetContents_4)

        self.verticalLayout_6.addWidget(self.scrollArea_4)

        self.stackPages.addWidget(self.help_page)
        self.about_page = QWidget()
        self.about_page.setObjectName(u"about_page")
        self.verticalLayout_7 = QVBoxLayout(self.about_page)
        self.verticalLayout_7.setObjectName(u"verticalLayout_7")
        self.aboutContainer = QWidget(self.about_page)
        self.aboutContainer.setObjectName(u"aboutContainer")
        self.aboutContainer.setStyleSheet(u"#aboutContainer{\n"
"	background-color: rgb(18, 18, 18);\n"
"	border-radius: 20px;\n"
"}")
        self.verticalLayout_22 = QVBoxLayout(self.aboutContainer)
        self.verticalLayout_22.setObjectName(u"verticalLayout_22")
        self.scrollArea_5 = QScrollArea(self.aboutContainer)
        self.scrollArea_5.setObjectName(u"scrollArea_5")
        self.scrollArea_5.setWidgetResizable(True)
        self.scrollAreaWidgetContents_5 = QWidget()
        self.scrollAreaWidgetContents_5.setObjectName(u"scrollAreaWidgetContents_5")
        self.scrollAreaWidgetContents_5.setGeometry(QRect(0, 0, 1096, 558))
        self.verticalLayout_47 = QVBoxLayout(self.scrollAreaWidgetContents_5)
        self.verticalLayout_47.setObjectName(u"verticalLayout_47")
        self.widget_17 = QWidget(self.scrollAreaWidgetContents_5)
        self.widget_17.setObjectName(u"widget_17")
        self.verticalLayout_57 = QVBoxLayout(self.widget_17)
        self.verticalLayout_57.setObjectName(u"verticalLayout_57")
        self.HeaderGuide = QFrame(self.widget_17)
        self.HeaderGuide.setObjectName(u"HeaderGuide")
        self.HeaderGuide.setFrameShape(QFrame.StyledPanel)
        self.HeaderGuide.setFrameShadow(QFrame.Raised)
        self.verticalLayout_50 = QVBoxLayout(self.HeaderGuide)
        self.verticalLayout_50.setObjectName(u"verticalLayout_50")
        self.label_4 = QLabel(self.HeaderGuide)
        self.label_4.setObjectName(u"label_4")
        font8 = QFont()
        font8.setFamilies([u"Prompt"])
        font8.setPointSize(20)
        font8.setBold(True)
        self.label_4.setFont(font8)
        self.label_4.setStyleSheet(u"color: rgb(255, 255, 255);")

        self.verticalLayout_50.addWidget(self.label_4, 0, Qt.AlignHCenter|Qt.AlignTop)


        self.verticalLayout_57.addWidget(self.HeaderGuide)

        self.SectionGuide = QFrame(self.widget_17)
        self.SectionGuide.setObjectName(u"SectionGuide")
        sizePolicy.setHeightForWidth(self.SectionGuide.sizePolicy().hasHeightForWidth())
        self.SectionGuide.setSizePolicy(sizePolicy)
        self.SectionGuide.setStyleSheet(u"color: rgb(255, 255, 255);")
        self.SectionGuide.setFrameShape(QFrame.StyledPanel)
        self.SectionGuide.setFrameShadow(QFrame.Raised)
        self.verticalLayout_55 = QVBoxLayout(self.SectionGuide)
        self.verticalLayout_55.setObjectName(u"verticalLayout_55")
        self.label_5 = QLabel(self.SectionGuide)
        self.label_5.setObjectName(u"label_5")
        font9 = QFont()
        font9.setFamilies([u"Prompt"])
        font9.setPointSize(15)
        font9.setBold(True)
        self.label_5.setFont(font9)
        self.label_5.setStyleSheet(u"color: rgb(255, 139, 19);")

        self.verticalLayout_55.addWidget(self.label_5)

        self.label_11 = QLabel(self.SectionGuide)
        self.label_11.setObjectName(u"label_11")
        font10 = QFont()
        font10.setFamilies([u"Prompt"])
        font10.setPointSize(10)
        self.label_11.setFont(font10)

        self.verticalLayout_55.addWidget(self.label_11, 0, Qt.AlignTop)

        self.label_16 = QLabel(self.SectionGuide)
        self.label_16.setObjectName(u"label_16")
        self.label_16.setFont(font10)

        self.verticalLayout_55.addWidget(self.label_16, 0, Qt.AlignTop)

        self.label_29 = QLabel(self.SectionGuide)
        self.label_29.setObjectName(u"label_29")
        self.label_29.setFont(font10)

        self.verticalLayout_55.addWidget(self.label_29)

        self.label_31 = QLabel(self.SectionGuide)
        self.label_31.setObjectName(u"label_31")
        self.label_31.setFont(font9)
        self.label_31.setStyleSheet(u"color: rgb(255, 139, 19);")

        self.verticalLayout_55.addWidget(self.label_31)

        self.label_32 = QLabel(self.SectionGuide)
        self.label_32.setObjectName(u"label_32")
        self.label_32.setFont(font10)

        self.verticalLayout_55.addWidget(self.label_32)


        self.verticalLayout_57.addWidget(self.SectionGuide)


        self.verticalLayout_47.addWidget(self.widget_17, 0, Qt.AlignTop)

        self.scrollArea_5.setWidget(self.scrollAreaWidgetContents_5)

        self.verticalLayout_22.addWidget(self.scrollArea_5)


        self.verticalLayout_7.addWidget(self.aboutContainer)

        self.stackPages.addWidget(self.about_page)

        self.horizontalLayout_5.addWidget(self.stackPages)


        self.horizontalLayout_2.addWidget(self.WrapMainContent)


        self.verticalLayout.addWidget(self.BodyContainer)

        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)

        self.stackPages.setCurrentIndex(0)


        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"Bill Builder", None))
        self.burgerButton.setText("")
        self.label.setText(QCoreApplication.translate("MainWindow", u"Billing", None))
#if QT_CONFIG(tooltip)
        self.switch_mode_btn.setToolTip(QCoreApplication.translate("MainWindow", u"<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Light Mode</span></p></body></html>", None))
#endif // QT_CONFIG(tooltip)
        self.switch_mode_btn.setText("")
#if QT_CONFIG(tooltip)
        self.bill_pages_btn.setToolTip(QCoreApplication.translate("MainWindow", u"<html><head/><body><p align=\"center\">Bill Builder</p></body></html>", None))
#endif // QT_CONFIG(tooltip)
        self.bill_pages_btn.setText("")
#if QT_CONFIG(tooltip)
        self.customer_pages_btn.setToolTip(QCoreApplication.translate("MainWindow", u"<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Customera</span></p></body></html>", None))
#endif // QT_CONFIG(tooltip)
        self.customer_pages_btn.setText("")
#if QT_CONFIG(tooltip)
        self.help_pages_btn.setToolTip(QCoreApplication.translate("MainWindow", u"<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Help</span></p></body></html>", None))
#endif // QT_CONFIG(tooltip)
        self.help_pages_btn.setText("")
#if QT_CONFIG(tooltip)
        self.about_pages_btn.setToolTip(QCoreApplication.translate("MainWindow", u"<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">About</span></p></body></html>", None))
#endif // QT_CONFIG(tooltip)
        self.about_pages_btn.setText("")
#if QT_CONFIG(tooltip)
        self.stackPages.setToolTip("")
#endif // QT_CONFIG(tooltip)
        self.label_10.setText(QCoreApplication.translate("MainWindow", u"Input Form", None))
        self.label_7.setText(QCoreApplication.translate("MainWindow", u"Customer Name", None))
        self.label_8.setText(QCoreApplication.translate("MainWindow", u"Address", None))
        self.label_9.setText(QCoreApplication.translate("MainWindow", u"Bill Number", None))
        self.label_6.setText(QCoreApplication.translate("MainWindow", u"Tax ID", None))
        self.label_2.setText(QCoreApplication.translate("MainWindow", u"Date (MM/DD/YY)", None))
        self.label_15.setText(QCoreApplication.translate("MainWindow", u"Product Form", None))
        self.label_12.setText(QCoreApplication.translate("MainWindow", u"Product Name", None))
        self.label_13.setText(QCoreApplication.translate("MainWindow", u"Quantity", None))
        self.label_14.setText(QCoreApplication.translate("MainWindow", u"Price", None))
        self.priceInput.setText(QCoreApplication.translate("MainWindow", u"100.00", None))
        self.refreshCombo_btn.setText("")
        self.addProduct_btn.setText(QCoreApplication.translate("MainWindow", u"Add", None))
        self.clearProduct_btn.setText(QCoreApplication.translate("MainWindow", u"Clear", None))
        self.generateBill_btn.setText(QCoreApplication.translate("MainWindow", u"Generate", None))
        self.Total.setText(QCoreApplication.translate("MainWindow", u"Total:", None))
        self.printForm_btn.setText("")
        self.refreshForm.setText("")
        self.label_17.setText(QCoreApplication.translate("MainWindow", u"Add Customer Data", None))
        self.label_18.setText(QCoreApplication.translate("MainWindow", u"Name", None))
        self.label_19.setText(QCoreApplication.translate("MainWindow", u"Address", None))
        self.label_3.setText(QCoreApplication.translate("MainWindow", u"Country", None))
        self.label_20.setText(QCoreApplication.translate("MainWindow", u"Contact", None))
        self.label_22.setText(QCoreApplication.translate("MainWindow", u"HaveBought", None))
        self.label_23.setText(QCoreApplication.translate("MainWindow", u"History", None))
        self.addDB_btn.setText(QCoreApplication.translate("MainWindow", u"Add Data", None))
        self.editDB_btn.setText(QCoreApplication.translate("MainWindow", u"Edit", None))
        self.clearDB_btn.setText(QCoreApplication.translate("MainWindow", u"Clear", None))
        self.label_21.setText(QCoreApplication.translate("MainWindow", u"Customer Database", None))
        self.label_24.setText(QCoreApplication.translate("MainWindow", u"Add Product Data", None))
        self.label_26.setText(QCoreApplication.translate("MainWindow", u"Name", None))
        self.label_27.setText(QCoreApplication.translate("MainWindow", u"Price", None))
        self.label_28.setText(QCoreApplication.translate("MainWindow", u"Stock", None))
        self.addProductDB_btn.setText(QCoreApplication.translate("MainWindow", u"Add Data", None))
        self.editProductDB_btn.setText(QCoreApplication.translate("MainWindow", u"Edit", None))
        self.clearProductDB_btn.setText(QCoreApplication.translate("MainWindow", u"Clear", None))
        self.label_30.setText(QCoreApplication.translate("MainWindow", u"Product Database", None))
        self.label_4.setText(QCoreApplication.translate("MainWindow", u"Application Guide", None))
        self.label_5.setText(QCoreApplication.translate("MainWindow", u"Bill Generate Section", None))
        self.label_11.setText(QCoreApplication.translate("MainWindow", u"          - \u0e1a\u0e34\u0e25\u0e17\u0e35\u0e48\u0e2a\u0e23\u0e49\u0e32\u0e07\u0e40\u0e2a\u0e23\u0e47\u0e08\u0e08\u0e30\u0e16\u0e39\u0e01\u0e40\u0e01\u0e47\u0e1a\u0e44\u0e27\u0e49\u0e17\u0e35\u0e48 BillApp/generator/pdf", None))
        self.label_16.setText(QCoreApplication.translate("MainWindow", u"          - \u0e15\u0e23\u0e27\u0e08\u0e2a\u0e2d\u0e1a\u0e0a\u0e49\u0e2d\u0e21\u0e39\u0e25\u0e43\u0e2b\u0e49\u0e16\u0e39\u0e01\u0e15\u0e49\u0e2d\u0e07\u0e17\u0e38\u0e01\u0e04\u0e23\u0e31\u0e49\u0e07\u0e01\u0e48\u0e2d\u0e19\u0e01\u0e14\u0e1b\u0e38\u0e48\u0e21 Generate", None))
        self.label_29.setText(QCoreApplication.translate("MainWindow", u"          - \u0e2b\u0e32\u0e01\u0e2a\u0e23\u0e49\u0e32\u0e07\u0e1a\u0e34\u0e25\u0e40\u0e2a\u0e23\u0e47\u0e08\u0e41\u0e25\u0e49\u0e27\u0e2a\u0e32\u0e21\u0e32\u0e23\u0e16\u0e01\u0e14\u0e1b\u0e38\u0e48\u0e21 Refresh \u0e40\u0e1e\u0e37\u0e48\u0e2d\u0e14\u0e39 Bill preview \u0e40\u0e1a\u0e37\u0e48\u0e2d\u0e07\u0e15\u0e49\u0e19\u0e44\u0e14\u0e49", None))
        self.label_31.setText(QCoreApplication.translate("MainWindow", u"Product / Customer Database Section", None))
        self.label_32.setText(QCoreApplication.translate("MainWindow", u"          - \u0e2b\u0e32\u0e01\u0e25\u0e1a\u0e0a\u0e49\u0e2d\u0e21\u0e39\u0e25\u0e44\u0e1b\u0e41\u0e25\u0e49\u0e27 (\u0e44\u0e21\u0e48\u0e27\u0e48\u0e32\u0e08\u0e30\u0e01\u0e14\u0e1b\u0e38\u0e48\u0e21 Clear \u0e2b\u0e23\u0e37\u0e2d Delete \u0e08\u0e30\u0e44\u0e21\u0e48\u0e2a\u0e32\u0e21\u0e32\u0e23\u0e16\u0e01\u0e39\u0e49\u0e02\u0e49\u0e2d\u0e21\u0e39\u0e25\u0e01\u0e25\u0e31\u0e1a\u0e21\u0e32\u0e44\u0e14\u0e49) ", None))
    # retranslateUi

