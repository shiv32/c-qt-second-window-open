#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
//#include "secdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("hello C++");
}

void MainWindow::on_pushButton_2_clicked()
{
QMessageBox::critical(this, tr("THE TITLE"), tr("this is a shiv"));
}

void MainWindow::on_pushButton_3_clicked()
{
    //second window model approach
  SecDialog secdilog;
  secdilog.setModal(true);
  secdilog.exec();

}

void MainWindow::on_pushButton_4_clicked()
{
    //second window modalless approach
   secdlg = new SecDialog(this);
    secdlg->show();
}
