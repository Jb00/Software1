#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QString>
#include "AddBedController.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(addBedClick()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addBedClick()
{
    if(ui->radioButton_4->isChecked())
    {
        ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"Acute","AFacility"));
    }
        else
            if (ui->radioButton_5->isChecked())
            {
                ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"Complex","AFacility"));
            }
                if (ui->radioButton_6->isChecked())
                {
                      ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"LTC","AFacility"));
                }

  //  ui->btn_total_2->setText(ui->textAdd_2->text());
}
