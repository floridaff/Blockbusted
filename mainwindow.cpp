#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_fts_clicked()
{
    qApp->exit();
}

void MainWindow::on_inv_clicked()
{
    Inventory inventory;
    inventory.setModal(true);
    inventory.exec();

}
