/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *searchButton;
    QPushButton *displayButton;
    QLineEdit *nameInput;
    QLineEdit *idInput;
    QLineEdit *expiryInput;
    QCheckBox *typeInput;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *updateButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(10, 130, 75, 23));
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(10, 160, 71, 23));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(90, 130, 91, 23));
        displayButton = new QPushButton(centralwidget);
        displayButton->setObjectName("displayButton");
        displayButton->setGeometry(QRect(90, 160, 91, 23));
        nameInput = new QLineEdit(centralwidget);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(90, 250, 113, 21));
        idInput = new QLineEdit(centralwidget);
        idInput->setObjectName("idInput");
        idInput->setGeometry(QRect(90, 280, 113, 21));
        expiryInput = new QLineEdit(centralwidget);
        expiryInput->setObjectName("expiryInput");
        expiryInput->setGeometry(QRect(90, 310, 113, 21));
        typeInput = new QCheckBox(centralwidget);
        typeInput->setObjectName("typeInput");
        typeInput->setGeometry(QRect(10, 340, 91, 19));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 250, 81, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 280, 91, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 310, 71, 20));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName("pushButton");
        updateButton->setGeometry(QRect(190, 130, 81, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "remove", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "search", nullptr));
        displayButton->setText(QCoreApplication::translate("MainWindow", "display", nullptr));
        nameInput->setText(QString());
        idInput->setText(QString());
        expiryInput->setText(QString());
        typeInput->setText(QCoreApplication::translate("MainWindow", "Preferred", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name          :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID               :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Expire date  : ", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "update ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
