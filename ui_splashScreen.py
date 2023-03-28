# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'splashScreen.ui'
##
## Created by: Qt User Interface Compiler version 6.4.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QMetaObject, QSize, Qt)
from PySide6.QtGui import (QFont, QPixmap)
from PySide6.QtWidgets import (QFrame, QLabel, QProgressBar,
    QSizePolicy, QVBoxLayout, QWidget)

class Ui_Form(object):
    def setupUi(self, Form):
        if not Form.objectName():
            Form.setObjectName(u"Form")
        Form.resize(852, 479)
        Form.setStyleSheet(u"*{\n"
"margin: 0;\n"
"padding: 0;\n"
"}\n"
"#Form{background-color: rgb(30, 31, 34);}")
        self.verticalLayout = QVBoxLayout(Form)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.wrapContent = QWidget(Form)
        self.wrapContent.setObjectName(u"wrapContent")
        self.verticalLayout_2 = QVBoxLayout(self.wrapContent)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.verticalLayout_2.setContentsMargins(-1, 25, -1, -1)
        self.logo = QFrame(self.wrapContent)
        self.logo.setObjectName(u"logo")
        self.logo.setFrameShape(QFrame.StyledPanel)
        self.logo.setFrameShadow(QFrame.Raised)
        self.verticalLayout_3 = QVBoxLayout(self.logo)
        self.verticalLayout_3.setSpacing(0)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.verticalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.label = QLabel(self.logo)
        self.label.setObjectName(u"label")
        self.label.setMaximumSize(QSize(200, 200))
        self.label.setBaseSize(QSize(0, 0))
        font = QFont()
        font.setPointSize(9)
        self.label.setFont(font)
        self.label.setPixmap(QPixmap(u"logo.png"))
        self.label.setScaledContents(True)
        self.label.setAlignment(Qt.AlignCenter)

        self.verticalLayout_3.addWidget(self.label, 0, Qt.AlignHCenter|Qt.AlignVCenter)


        self.verticalLayout_2.addWidget(self.logo, 0, Qt.AlignTop)

        self.text = QFrame(self.wrapContent)
        self.text.setObjectName(u"text")
        self.text.setFrameShape(QFrame.StyledPanel)
        self.text.setFrameShadow(QFrame.Raised)
        self.verticalLayout_4 = QVBoxLayout(self.text)
        self.verticalLayout_4.setObjectName(u"verticalLayout_4")
        self.verticalLayout_4.setContentsMargins(0, 0, 0, 0)
        self.label_2 = QLabel(self.text)
        self.label_2.setObjectName(u"label_2")
        font1 = QFont()
        font1.setFamilies([u"Prompt"])
        font1.setPointSize(20)
        font1.setBold(True)
        self.label_2.setFont(font1)
        self.label_2.setStyleSheet(u"color: rgb(123, 174, 56);")

        self.verticalLayout_4.addWidget(self.label_2, 0, Qt.AlignHCenter)

        self.label_description = QLabel(self.text)
        self.label_description.setObjectName(u"label_description")
        sizePolicy = QSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_description.sizePolicy().hasHeightForWidth())
        self.label_description.setSizePolicy(sizePolicy)
        self.label_description.setMinimumSize(QSize(0, 0))
        font2 = QFont()
        font2.setFamilies([u"Prompt"])
        font2.setBold(True)
        self.label_description.setFont(font2)
        self.label_description.setLayoutDirection(Qt.LeftToRight)
        self.label_description.setStyleSheet(u"#label_description{\n"
"	color: rgb(255, 255, 255);\n"
"	text-align: center;\n"
"}\n"
"")
        self.label_description.setScaledContents(False)
        self.label_description.setAlignment(Qt.AlignCenter)
        self.label_description.setWordWrap(False)

        self.verticalLayout_4.addWidget(self.label_description, 0, Qt.AlignHCenter)


        self.verticalLayout_2.addWidget(self.text)


        self.verticalLayout.addWidget(self.wrapContent, 0, Qt.AlignTop)

        self.wrapLoader = QWidget(Form)
        self.wrapLoader.setObjectName(u"wrapLoader")
        self.verticalLayout_5 = QVBoxLayout(self.wrapLoader)
        self.verticalLayout_5.setObjectName(u"verticalLayout_5")
        self.verticalLayout_5.setContentsMargins(-1, 0, -1, -1)
        self.widget = QWidget(self.wrapLoader)
        self.widget.setObjectName(u"widget")
        self.verticalLayout_6 = QVBoxLayout(self.widget)
        self.verticalLayout_6.setObjectName(u"verticalLayout_6")
        self.verticalLayout_6.setContentsMargins(-1, 0, -1, -1)
        self.progressBar = QProgressBar(self.widget)
        self.progressBar.setObjectName(u"progressBar")
        self.progressBar.setStyleSheet(u"QProgressBar{\n"
"	background-color: rgb(101, 105, 115);\n"
"	color: rgb(255, 255, 255);\n"
"	text-align:center;\n"
"	border-radius: 10px;\n"
"	padding: 3px;\n"
"}\n"
"QProgressBar::chunk{\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(123, 174, 56, 255), stop:1 rgba(237, 34, 38, 255));\n"
"}")
        self.progressBar.setValue(24)

        self.verticalLayout_6.addWidget(self.progressBar)

        self.License = QLabel(self.widget)
        self.License.setObjectName(u"License")
        self.License.setFont(font2)
        self.License.setStyleSheet(u"color: rgb(113, 113, 113);")

        self.verticalLayout_6.addWidget(self.License, 0, Qt.AlignRight|Qt.AlignBottom)


        self.verticalLayout_5.addWidget(self.widget, 0, Qt.AlignVCenter)


        self.verticalLayout.addWidget(self.wrapLoader)


        self.retranslateUi(Form)

        QMetaObject.connectSlotsByName(Form)
    # setupUi

    def retranslateUi(self, Form):
        Form.setWindowTitle(QCoreApplication.translate("Form", u"Form", None))
        self.label.setText("")
        self.label_2.setText(QCoreApplication.translate("Form", u"Bill Maker", None))
        self.label_description.setText(QCoreApplication.translate("Form", u"Loading Content", None))
        self.License.setText(QCoreApplication.translate("Form", u"This program is licensed under the I TRENDING GOODS COMPANY License.", None))
    # retranslateUi

