#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSerialPortInfo>
#include <QSerialPort>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    //获取所有可用串口
    auto portsInfo =  QSerialPortInfo::availablePorts();
    for(auto & info : portsInfo)
    {
        qInfo()<<info.description() <<info.portName() <<info.portName()<<info.systemLocation();
        ui->portsCmb->addItem(info.portName()+":"+info.description(),info.portName());
    }
    //获取标准的波特率
    auto baudRates =  QSerialPortInfo::standardBaudRates();
    for (auto br : baudRates)
    {
        ui->baudRateCmb->addItem(QString::number(br),br);
    }
    ui->baudRateCmb->setCurrentText("9600");
    //设置停止位
    ui->stopBitsCmb->addItem("1",QSerialPort::OneStop);
    ui->stopBitsCmb->addItem("1.5",QSerialPort::OneAndHalfStop);
    ui->stopBitsCmb->addItem("1",QSerialPort::TwoStop);
    //设置数据位
    ui->dataBitsCmb->addItem("5",QSerialPort::Data5);
    ui->dataBitsCmb->addItem("6",QSerialPort::Data6);
    ui->dataBitsCmb->addItem("7",QSerialPort::Data7);
    ui->dataBitsCmb->addItem("8",QSerialPort::Data8);

    //设置校验位
    ui->parityCmb->addItem("NoParity ",QSerialPort::NoParity);
    ui->parityCmb->addItem("EvenParity ",QSerialPort::EvenParity);
    ui->parityCmb->addItem("OddParity ",QSerialPort::OddParity);
    ui->parityCmb->addItem("SpaceParity ",QSerialPort::SpaceParity);
    ui->parityCmb->addItem("MarkParity ",QSerialPort::MarkParity);
}
