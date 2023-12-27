/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout_3;
    QPlainTextEdit *recvEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *saveDataBtn;
    QLabel *label_5;
    QPushButton *OpenPortBtn;
    QLabel *label;
    QCheckBox *hexDisplayChx;
    QComboBox *dataBitsCmb;
    QComboBox *portsCmb;
    QLabel *label_6;
    QLabel *label_3;
    QPushButton *clearRecvBtn;
    QComboBox *stopBitsCmb;
    QLabel *label_2;
    QLabel *label_4;
    QComboBox *parityCmb;
    QComboBox *baudRateCmb;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *timerSendChx;
    QPushButton *sendClearBtn;
    QLabel *label_7;
    QPushButton *sendBtn;
    QLabel *label_8;
    QPushButton *sendStopBtn;
    QPushButton *sendFileBtn;
    QLineEdit *timePeriodEdit;
    QCheckBox *sendNewLineChx;
    QPushButton *openFileBtn;
    QLineEdit *fileNameEdit;
    QPlainTextEdit *plainTextEdit_2;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(991, 594);
        gridLayout_3 = new QGridLayout(MainWindow);
        gridLayout_3->setObjectName("gridLayout_3");
        recvEdit = new QPlainTextEdit(MainWindow);
        recvEdit->setObjectName("recvEdit");
        recvEdit->setReadOnly(true);

        gridLayout_3->addWidget(recvEdit, 0, 0, 1, 1);

        widget = new QWidget(MainWindow);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(10);
        saveDataBtn = new QPushButton(widget);
        saveDataBtn->setObjectName("saveDataBtn");

        gridLayout->addWidget(saveDataBtn, 7, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        OpenPortBtn = new QPushButton(widget);
        OpenPortBtn->setObjectName("OpenPortBtn");

        gridLayout->addWidget(OpenPortBtn, 6, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hexDisplayChx = new QCheckBox(widget);
        hexDisplayChx->setObjectName("hexDisplayChx");

        gridLayout->addWidget(hexDisplayChx, 8, 0, 1, 2);

        dataBitsCmb = new QComboBox(widget);
        dataBitsCmb->setObjectName("dataBitsCmb");

        gridLayout->addWidget(dataBitsCmb, 4, 1, 1, 1);

        portsCmb = new QComboBox(widget);
        portsCmb->setObjectName("portsCmb");

        gridLayout->addWidget(portsCmb, 1, 0, 1, 2);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        clearRecvBtn = new QPushButton(widget);
        clearRecvBtn->setObjectName("clearRecvBtn");

        gridLayout->addWidget(clearRecvBtn, 7, 1, 1, 1);

        stopBitsCmb = new QComboBox(widget);
        stopBitsCmb->setObjectName("stopBitsCmb");

        gridLayout->addWidget(stopBitsCmb, 3, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        parityCmb = new QComboBox(widget);
        parityCmb->setObjectName("parityCmb");

        gridLayout->addWidget(parityCmb, 5, 1, 1, 1);

        baudRateCmb = new QComboBox(widget);
        baudRateCmb->setObjectName("baudRateCmb");

        gridLayout->addWidget(baudRateCmb, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        gridLayout->setColumnMinimumWidth(0, 1);
        gridLayout->setColumnMinimumWidth(1, 1);

        gridLayout_3->addWidget(widget, 0, 1, 1, 1);

        widget_2 = new QWidget(MainWindow);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 2, -1, -1);
        timerSendChx = new QCheckBox(widget_2);
        timerSendChx->setObjectName("timerSendChx");

        gridLayout_2->addWidget(timerSendChx, 2, 0, 1, 1);

        sendClearBtn = new QPushButton(widget_2);
        sendClearBtn->setObjectName("sendClearBtn");

        gridLayout_2->addWidget(sendClearBtn, 1, 7, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 2, 3, 1, 1);

        sendBtn = new QPushButton(widget_2);
        sendBtn->setObjectName("sendBtn");

        gridLayout_2->addWidget(sendBtn, 0, 7, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 2, 1, 1, 1);

        sendStopBtn = new QPushButton(widget_2);
        sendStopBtn->setObjectName("sendStopBtn");

        gridLayout_2->addWidget(sendStopBtn, 2, 7, 1, 1);

        sendFileBtn = new QPushButton(widget_2);
        sendFileBtn->setObjectName("sendFileBtn");

        gridLayout_2->addWidget(sendFileBtn, 2, 6, 1, 1);

        timePeriodEdit = new QLineEdit(widget_2);
        timePeriodEdit->setObjectName("timePeriodEdit");
        timePeriodEdit->setMaximumSize(QSize(45, 16777215));

        gridLayout_2->addWidget(timePeriodEdit, 2, 2, 1, 1);

        sendNewLineChx = new QCheckBox(widget_2);
        sendNewLineChx->setObjectName("sendNewLineChx");

        gridLayout_2->addWidget(sendNewLineChx, 3, 0, 1, 1);

        openFileBtn = new QPushButton(widget_2);
        openFileBtn->setObjectName("openFileBtn");

        gridLayout_2->addWidget(openFileBtn, 2, 5, 1, 1);

        fileNameEdit = new QLineEdit(widget_2);
        fileNameEdit->setObjectName("fileNameEdit");

        gridLayout_2->addWidget(fileNameEdit, 2, 4, 1, 1);

        plainTextEdit_2 = new QPlainTextEdit(widget_2);
        plainTextEdit_2->setObjectName("plainTextEdit_2");

        gridLayout_2->addWidget(plainTextEdit_2, 0, 0, 2, 7);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 2);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        saveDataBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        OpenPortBtn->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        hexDisplayChx->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        clearRecvBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        timerSendChx->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        sendClearBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        sendBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\221\250\346\234\237", nullptr));
        sendStopBtn->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\217\221\351\200\201", nullptr));
        sendFileBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        sendNewLineChx->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        openFileBtn->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
