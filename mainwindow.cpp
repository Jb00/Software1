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
     aFacility2 = new Hospital("TheFacility","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addBedClick()
{
 //   LongTermCare * aFacility3 = new LongTermCare("TheFacility","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE

    if(ui->radioButton_4->isChecked())
    {
        ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"Acute",aFacility2));
    }
        else
            if (ui->radioButton_5->isChecked())
            {
                ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"Complex",aFacility2));
            }
                if (ui->radioButton_6->isChecked())
                {
                      //ui->btn_total_2->setText(AddBedController::getInstance()->addtoBed(ui->textAdd_2->text(),"LTC",aFacility3));
                }

  //  ui->btn_total_2->setText(ui->textAdd_2->text());
}
