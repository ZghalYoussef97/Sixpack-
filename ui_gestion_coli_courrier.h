/********************************************************************************
** Form generated from reading UI file 'gestion_coli_courrier.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_COLI_COURRIER_H
#define UI_GESTION_COLI_COURRIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gestion_Coli_Courrier
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *modifiercoli;
    QPushButton *suppcoli;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *Priorite;
    QLineEdit *Prix;
    QCheckBox *Avecliv;
    QTextEdit *Adresseem;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *idcoli;
    QLineEdit *Poids;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QTextEdit *Adressedest;
    QLabel *label_7;
    QComboBox *Etat;
    QTableView *tableColi;
    QPushButton *ajoutercoli;
    QPushButton *stat1;
    QPushButton *EXCEL1;
    QPushButton *tri_coli;
    QComboBox *comboBox_5;
    QCheckBox *checkBox_1;
    QLineEdit *recherche;
    QLabel *label_22;
    QWidget *tab_7;
    QPushButton *supp_equip;
    QPushButton *modifierequip;
    QTableView *tableView_3;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_15;
    QLineEdit *lineEdit_2;
    QLabel *label_16;
    QComboBox *comboBox_3;
    QCheckBox *checkBox;
    QPushButton *ajouterequip;
    QWidget *tab_10;
    QPushButton *ajouterliv;
    QPushButton *supp_liv;
    QPushButton *pushButton_9;
    QTableView *tableView_4;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_21;
    QLineEdit *lineEdit_idliv;
    QLabel *label_18;
    QComboBox *comboBox;
    QLabel *label_19;
    QComboBox *comboBox_2;
    QLabel *label_20;
    QDateEdit *dateTimeEdit;
    QWidget *tab;
    QLineEdit *subject;
    QLineEdit *file;
    QTextEdit *msg;
    QPushButton *sendBtn;
    QPushButton *browseBtn;
    QLineEdit *rcpt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gestion_Coli_Courrier)
    {
        if (Gestion_Coli_Courrier->objectName().isEmpty())
            Gestion_Coli_Courrier->setObjectName(QString::fromUtf8("Gestion_Coli_Courrier"));
        Gestion_Coli_Courrier->resize(862, 539);
        centralwidget = new QWidget(Gestion_Coli_Courrier);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 851, 491));
        tabWidget_2->setStyleSheet(QString::fromUtf8(""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        modifiercoli = new QPushButton(tab_3);
        modifiercoli->setObjectName(QString::fromUtf8("modifiercoli"));
        modifiercoli->setGeometry(QRect(140, 410, 41, 41));
        modifiercoli->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/modify.png);"));
        suppcoli = new QPushButton(tab_3);
        suppcoli->setObjectName(QString::fromUtf8("suppcoli"));
        suppcoli->setGeometry(QRect(210, 410, 41, 41));
        suppcoli->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/delete.png);"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 326, 371));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        Priorite = new QComboBox(layoutWidget);
        Priorite->setObjectName(QString::fromUtf8("Priorite"));

        gridLayout->addWidget(Priorite, 3, 1, 1, 1);

        Prix = new QLineEdit(layoutWidget);
        Prix->setObjectName(QString::fromUtf8("Prix"));

        gridLayout->addWidget(Prix, 5, 1, 1, 1);

        Avecliv = new QCheckBox(layoutWidget);
        Avecliv->setObjectName(QString::fromUtf8("Avecliv"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        Avecliv->setFont(font1);

        gridLayout->addWidget(Avecliv, 7, 1, 1, 1);

        Adresseem = new QTextEdit(layoutWidget);
        Adresseem->setObjectName(QString::fromUtf8("Adresseem"));

        gridLayout->addWidget(Adresseem, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        idcoli = new QLineEdit(layoutWidget);
        idcoli->setObjectName(QString::fromUtf8("idcoli"));

        gridLayout->addWidget(idcoli, 0, 1, 1, 1);

        Poids = new QLineEdit(layoutWidget);
        Poids->setObjectName(QString::fromUtf8("Poids"));

        gridLayout->addWidget(Poids, 4, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        Adressedest = new QTextEdit(layoutWidget);
        Adressedest->setObjectName(QString::fromUtf8("Adressedest"));

        gridLayout->addWidget(Adressedest, 2, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        Etat = new QComboBox(layoutWidget);
        Etat->setObjectName(QString::fromUtf8("Etat"));

        gridLayout->addWidget(Etat, 6, 1, 1, 1);

        tableColi = new QTableView(tab_3);
        tableColi->setObjectName(QString::fromUtf8("tableColi"));
        tableColi->setGeometry(QRect(370, 50, 461, 341));
        tableColi->setStyleSheet(QString::fromUtf8(""));
        ajoutercoli = new QPushButton(tab_3);
        ajoutercoli->setObjectName(QString::fromUtf8("ajoutercoli"));
        ajoutercoli->setGeometry(QRect(70, 410, 41, 41));
        ajoutercoli->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/add.png);"));
        stat1 = new QPushButton(tab_3);
        stat1->setObjectName(QString::fromUtf8("stat1"));
        stat1->setGeometry(QRect(280, 410, 41, 41));
        stat1->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/stat.png);"));
        EXCEL1 = new QPushButton(tab_3);
        EXCEL1->setObjectName(QString::fromUtf8("EXCEL1"));
        EXCEL1->setGeometry(QRect(350, 396, 61, 61));
        EXCEL1->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/excel.png);"));
        tri_coli = new QPushButton(tab_3);
        tri_coli->setObjectName(QString::fromUtf8("tri_coli"));
        tri_coli->setGeometry(QRect(590, 415, 31, 31));
        tri_coli->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/tri.png);"));
        comboBox_5 = new QComboBox(tab_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(640, 420, 81, 22));
        checkBox_1 = new QCheckBox(tab_3);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(750, 420, 81, 31));
        recherche = new QLineEdit(tab_3);
        recherche->setObjectName(QString::fromUtf8("recherche"));
        recherche->setGeometry(QRect(370, 20, 391, 21));
        recherche->setStyleSheet(QString::fromUtf8(""));
        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(790, 20, 31, 21));
        label_22->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/search.png);"));
        tabWidget_2->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        supp_equip = new QPushButton(tab_7);
        supp_equip->setObjectName(QString::fromUtf8("supp_equip"));
        supp_equip->setGeometry(QRect(670, 70, 41, 41));
        supp_equip->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/delete.png);"));
        modifierequip = new QPushButton(tab_7);
        modifierequip->setObjectName(QString::fromUtf8("modifierequip"));
        modifierequip->setGeometry(QRect(750, 20, 41, 41));
        modifierequip->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/modify.png);"));
        tableView_3 = new QTableView(tab_7);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(30, 160, 791, 281));
        layoutWidget_2 = new QWidget(tab_7);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 10, 581, 121));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        gridLayout_2->addWidget(label_15, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);

        comboBox_3 = new QComboBox(layoutWidget_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_2->addWidget(comboBox_3, 1, 1, 1, 1);

        checkBox = new QCheckBox(layoutWidget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font1);

        gridLayout_2->addWidget(checkBox, 2, 1, 1, 1);

        ajouterequip = new QPushButton(tab_7);
        ajouterequip->setObjectName(QString::fromUtf8("ajouterequip"));
        ajouterequip->setGeometry(QRect(670, 20, 41, 41));
        ajouterequip->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/add.png);"));
        tabWidget_2->addTab(tab_7, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        ajouterliv = new QPushButton(tab_10);
        ajouterliv->setObjectName(QString::fromUtf8("ajouterliv"));
        ajouterliv->setGeometry(QRect(690, 30, 41, 41));
        ajouterliv->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/add.png);"));
        supp_liv = new QPushButton(tab_10);
        supp_liv->setObjectName(QString::fromUtf8("supp_liv"));
        supp_liv->setGeometry(QRect(690, 90, 41, 41));
        supp_liv->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/delete.png);"));
        pushButton_9 = new QPushButton(tab_10);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(760, 30, 41, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/modify.png);"));
        tableView_4 = new QTableView(tab_10);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));
        tableView_4->setGeometry(QRect(20, 160, 801, 291));
        layoutWidget_3 = new QWidget(tab_10);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 20, 581, 131));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        gridLayout_3->addWidget(label_21, 0, 0, 1, 1);

        lineEdit_idliv = new QLineEdit(layoutWidget_3);
        lineEdit_idliv->setObjectName(QString::fromUtf8("lineEdit_idliv"));

        gridLayout_3->addWidget(lineEdit_idliv, 0, 1, 1, 1);

        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout_3->addWidget(label_18, 1, 0, 1, 1);

        comboBox = new QComboBox(layoutWidget_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_3->addWidget(comboBox, 1, 1, 1, 1);

        label_19 = new QLabel(layoutWidget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(layoutWidget_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_3->addWidget(comboBox_2, 2, 1, 1, 1);

        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        gridLayout_3->addWidget(label_20, 3, 0, 1, 1);

        dateTimeEdit = new QDateEdit(layoutWidget_3);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_3->addWidget(dateTimeEdit, 3, 1, 1, 1);

        tabWidget_2->addTab(tab_10, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        subject = new QLineEdit(tab);
        subject->setObjectName(QString::fromUtf8("subject"));
        subject->setGeometry(QRect(40, 64, 771, 20));
        file = new QLineEdit(tab);
        file->setObjectName(QString::fromUtf8("file"));
        file->setGeometry(QRect(40, 100, 641, 23));
        msg = new QTextEdit(tab);
        msg->setObjectName(QString::fromUtf8("msg"));
        msg->setGeometry(QRect(40, 136, 771, 291));
        sendBtn = new QPushButton(tab);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setGeometry(QRect(40, 430, 771, 23));
        browseBtn = new QPushButton(tab);
        browseBtn->setObjectName(QString::fromUtf8("browseBtn"));
        browseBtn->setGeometry(QRect(700, 99, 111, 24));
        rcpt = new QLineEdit(tab);
        rcpt->setObjectName(QString::fromUtf8("rcpt"));
        rcpt->setGeometry(QRect(40, 30, 771, 20));
        tabWidget_2->addTab(tab, QString());
        Gestion_Coli_Courrier->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gestion_Coli_Courrier);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 862, 21));
        Gestion_Coli_Courrier->setMenuBar(menubar);
        statusbar = new QStatusBar(Gestion_Coli_Courrier);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Gestion_Coli_Courrier->setStatusBar(statusbar);

        retranslateUi(Gestion_Coli_Courrier);

        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Gestion_Coli_Courrier);
    } // setupUi

    void retranslateUi(QMainWindow *Gestion_Coli_Courrier)
    {
        Gestion_Coli_Courrier->setWindowTitle(QCoreApplication::translate("Gestion_Coli_Courrier", "Gestion_Coli_Courrier", nullptr));
        modifiercoli->setText(QString());
        suppcoli->setText(QString());
        label_4->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">Priorit\303\251</span></p></body></html>", nullptr));
        Prix->setPlaceholderText(QCoreApplication::translate("Gestion_Coli_Courrier", "Veuillez saisir le prix en Millime", nullptr));
        Avecliv->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "Avec livraison", nullptr));
        label_2->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" color:#000000;\">Adresse emetteur</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">Etat</span></p></body></html>", nullptr));
        Poids->setPlaceholderText(QCoreApplication::translate("Gestion_Coli_Courrier", "Veuillez saisir le poid en G", nullptr));
        label->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">ID coli</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">Poids</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; color:#000000;\">Adresse destinataire</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#000000;\">Prix</span></p></body></html>", nullptr));
        ajoutercoli->setText(QString());
        stat1->setText(QString());
        EXCEL1->setText(QString());
        tri_coli->setText(QString());
        comboBox_5->setItemText(0, QCoreApplication::translate("Gestion_Coli_Courrier", "IDCOLI", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("Gestion_Coli_Courrier", "ADRESSEEM", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("Gestion_Coli_Courrier", "ADRESSEDEST", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("Gestion_Coli_Courrier", "PRIORITE", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("Gestion_Coli_Courrier", "POIDS", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("Gestion_Coli_Courrier", "PRIX", nullptr));
        comboBox_5->setItemText(6, QCoreApplication::translate("Gestion_Coli_Courrier", "ETAT", nullptr));
        comboBox_5->setItemText(7, QCoreApplication::translate("Gestion_Coli_Courrier", "AVECLIV", nullptr));

        checkBox_1->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "decroissant", nullptr));
        recherche->setText(QString());
        recherche->setPlaceholderText(QCoreApplication::translate("Gestion_Coli_Courrier", "Rechercher", nullptr));
        label_22->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("Gestion_Coli_Courrier", "Gestion des colis", nullptr));
        supp_equip->setText(QString());
        modifierequip->setText(QString());
        label_15->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">ID \303\251quipement</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Type</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "Disponible", nullptr));
        ajouterequip->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("Gestion_Coli_Courrier", "Gestion des resources", nullptr));
        ajouterliv->setText(QString());
        supp_liv->setText(QString());
        pushButton_9->setText(QString());
        label_21->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">ID Livraison</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">ID Coli</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">ID Equipement</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Date de la livraison</span></p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QCoreApplication::translate("Gestion_Coli_Courrier", "Livraison", nullptr));
        subject->setPlaceholderText(QCoreApplication::translate("Gestion_Coli_Courrier", "subject", nullptr));
        file->setPlaceholderText(QCoreApplication::translate("Gestion_Coli_Courrier", "attachement here", nullptr));
        msg->setPlaceholderText(QCoreApplication::translate("Gestion_Coli_Courrier", "type your message here ...", nullptr));
        sendBtn->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "Send", nullptr));
        browseBtn->setText(QCoreApplication::translate("Gestion_Coli_Courrier", "Browse ...", nullptr));
        rcpt->setPlaceholderText(QCoreApplication::translate("Gestion_Coli_Courrier", "recipient", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("Gestion_Coli_Courrier", "mailing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestion_Coli_Courrier: public Ui_Gestion_Coli_Courrier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_COLI_COURRIER_H
