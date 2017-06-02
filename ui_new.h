/********************************************************************************
** Form generated from reading UI file 'new.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_H
#define UI_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListWidget *adminList;
    QLabel *photoLabel;
    QLineEdit *photoLineEdit;
    QLabel *lengthLabel;
    QLineEdit *lengthLineEdit;
    QLineEdit *sizeLineEdit;
    QLabel *sizeLabel;
    QLabel *colorLabel;
    QLineEdit *colorLineEdit;
    QLabel *priceLabel;
    QLineEdit *priceLineEdit;
    QLabel *quantityLabel;
    QLineEdit *quantityLineEdit;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QListWidget *userList;
    QLabel *label_2;
    QPushButton *filterButton;
    QRadioButton *shuffleRadioButton;
    QRadioButton *sortRadioButton;
    QSlider *verticalSlider;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *userLabel;
    QPushButton *homeButton;
    QPushButton *pushButton_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1193, 920);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1600, 851));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../../../Desktop/abstract-photography-wallpaper-2.jpg")));
        adminList = new QListWidget(centralwidget);
        adminList->setObjectName(QStringLiteral("adminList"));
        adminList->setGeometry(QRect(20, 70, 611, 401));
        photoLabel = new QLabel(centralwidget);
        photoLabel->setObjectName(QStringLiteral("photoLabel"));
        photoLabel->setGeometry(QRect(21, 640, 50, 25));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(13);
        photoLabel->setFont(font);
        photoLineEdit = new QLineEdit(centralwidget);
        photoLineEdit->setObjectName(QStringLiteral("photoLineEdit"));
        photoLineEdit->setGeometry(QRect(121, 640, 261, 22));
        lengthLabel = new QLabel(centralwidget);
        lengthLabel->setObjectName(QStringLiteral("lengthLabel"));
        lengthLabel->setGeometry(QRect(21, 672, 58, 25));
        lengthLabel->setFont(font);
        lengthLineEdit = new QLineEdit(centralwidget);
        lengthLineEdit->setObjectName(QStringLiteral("lengthLineEdit"));
        lengthLineEdit->setGeometry(QRect(121, 672, 261, 22));
        sizeLineEdit = new QLineEdit(centralwidget);
        sizeLineEdit->setObjectName(QStringLiteral("sizeLineEdit"));
        sizeLineEdit->setGeometry(QRect(121, 512, 261, 22));
        sizeLabel = new QLabel(centralwidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setGeometry(QRect(21, 512, 37, 25));
        sizeLabel->setFont(font);
        colorLabel = new QLabel(centralwidget);
        colorLabel->setObjectName(QStringLiteral("colorLabel"));
        colorLabel->setGeometry(QRect(21, 544, 50, 25));
        colorLabel->setFont(font);
        colorLineEdit = new QLineEdit(centralwidget);
        colorLineEdit->setObjectName(QStringLiteral("colorLineEdit"));
        colorLineEdit->setGeometry(QRect(121, 544, 261, 22));
        priceLabel = new QLabel(centralwidget);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        priceLabel->setGeometry(QRect(21, 576, 45, 25));
        priceLabel->setFont(font);
        priceLineEdit = new QLineEdit(centralwidget);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));
        priceLineEdit->setGeometry(QRect(121, 576, 261, 22));
        quantityLabel = new QLabel(centralwidget);
        quantityLabel->setObjectName(QStringLiteral("quantityLabel"));
        quantityLabel->setGeometry(QRect(21, 608, 76, 25));
        quantityLabel->setFont(font);
        quantityLineEdit = new QLineEdit(centralwidget);
        quantityLineEdit->setObjectName(QStringLiteral("quantityLineEdit"));
        quantityLineEdit->setGeometry(QRect(121, 608, 261, 22));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(440, 650, 101, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Onyx"));
        font1.setPointSize(20);
        updateButton->setFont(font1);
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(440, 580, 101, 51));
        deleteButton->setFont(font1);
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(440, 510, 101, 51));
        addButton->setFont(font1);
        userList = new QListWidget(centralwidget);
        userList->setObjectName(QStringLiteral("userList"));
        userList->setGeometry(QRect(930, 340, 231, 461));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(930, 90, 261, 231));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../../../../Desktop/desc\304\203rcare.png")));
        filterButton = new QPushButton(centralwidget);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setGeometry(QRect(440, 720, 101, 51));
        filterButton->setFont(font1);
        shuffleRadioButton = new QRadioButton(centralwidget);
        shuffleRadioButton->setObjectName(QStringLiteral("shuffleRadioButton"));
        shuffleRadioButton->setGeometry(QRect(210, 730, 95, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Onyx"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        shuffleRadioButton->setFont(font2);
        sortRadioButton = new QRadioButton(centralwidget);
        sortRadioButton->setObjectName(QStringLiteral("sortRadioButton"));
        sortRadioButton->setGeometry(QRect(210, 760, 95, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Onyx"));
        font3.setPointSize(14);
        sortRadioButton->setFont(font3);
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(600, 80, 16, 371));
        verticalSlider->setOrientation(Qt::Vertical);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(720, 540, 131, 31));
        pushButton->setFont(font3);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(720, 580, 131, 31));
        pushButton_2->setFont(font3);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(720, 620, 131, 31));
        comboBox->setFont(font3);
        userLabel = new QLabel(centralwidget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(670, 460, 251, 71));
        QFont font4;
        font4.setFamily(QStringLiteral("Garamond"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        userLabel->setFont(font4);
        homeButton = new QPushButton(centralwidget);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setGeometry(QRect(440, 790, 101, 51));
        homeButton->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(720, 670, 131, 28));
        pushButton_3->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        userList->raise();
        photoLabel->raise();
        photoLineEdit->raise();
        lengthLabel->raise();
        lengthLineEdit->raise();
        sizeLineEdit->raise();
        sizeLabel->raise();
        colorLabel->raise();
        colorLineEdit->raise();
        priceLabel->raise();
        priceLineEdit->raise();
        quantityLabel->raise();
        quantityLineEdit->raise();
        updateButton->raise();
        deleteButton->raise();
        addButton->raise();
        adminList->raise();
        label_2->raise();
        filterButton->raise();
        shuffleRadioButton->raise();
        sortRadioButton->raise();
        verticalSlider->raise();
        pushButton->raise();
        pushButton_2->raise();
        comboBox->raise();
        userLabel->raise();
        homeButton->raise();
        pushButton_3->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(colorLineEdit, priceLineEdit);
        QWidget::setTabOrder(priceLineEdit, quantityLineEdit);
        QWidget::setTabOrder(quantityLineEdit, photoLineEdit);
        QWidget::setTabOrder(photoLineEdit, lengthLineEdit);
        QWidget::setTabOrder(lengthLineEdit, adminList);
        QWidget::setTabOrder(adminList, addButton);
        QWidget::setTabOrder(addButton, sizeLineEdit);
        QWidget::setTabOrder(sizeLineEdit, updateButton);
        QWidget::setTabOrder(updateButton, deleteButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QString());
        photoLabel->setText(QApplication::translate("MainWindow", "Photo", 0));
        lengthLabel->setText(QApplication::translate("MainWindow", "Length", 0));
        sizeLabel->setText(QApplication::translate("MainWindow", "Size", 0));
        colorLabel->setText(QApplication::translate("MainWindow", "Color", 0));
        priceLabel->setText(QApplication::translate("MainWindow", "Price", 0));
        quantityLabel->setText(QApplication::translate("MainWindow", "Quantity", 0));
        updateButton->setText(QApplication::translate("MainWindow", "UPDATE", 0));
        deleteButton->setText(QApplication::translate("MainWindow", "DELETE", 0));
        addButton->setText(QApplication::translate("MainWindow", "ADD", 0));
        label_2->setText(QString());
        filterButton->setText(QApplication::translate("MainWindow", "FILTER", 0));
        shuffleRadioButton->setText(QApplication::translate("MainWindow", " SHUFFLE ", 0));
        sortRadioButton->setText(QApplication::translate("MainWindow", "SORT", 0));
        pushButton->setText(QApplication::translate("MainWindow", "BUY", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "CHECK PHOTO", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "         SAVE TO CSV", 0)
         << QApplication::translate("MainWindow", "         SAVE TO HTML", 0)
        );
        userLabel->setText(QApplication::translate("MainWindow", "USER OPTIONS", 0));
        homeButton->setText(QApplication::translate("MainWindow", "HOME", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "OPEN CSV/HTML", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_H
