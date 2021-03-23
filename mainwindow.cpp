#include <iostream>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(testMH()));

    connect(ui->pushButton2, SIGNAL(clicked()), this, SLOT(testMH()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testMH()
{
   QMessageBox::about(this, tr("About Application"),
            tr("The <b>Application</b> example demonstrates how to "
               "write modern GUI applications using Qt, with a menu bar, "
               "toolbars, and a status bar."));

}


void MainWindow::on_commandLinkButton_clicked()
{
    std::cout << "Hallo" << ++cnt << std::endl;
    ui->lcdNumber->display(cnt++);


}

void MainWindow::on_commandLinkButton_toggled(bool checked)
{
    std::cout << "Toggled" << checked << std::endl;
    ui->commandLinkButton->setEnabled(checked);

}
