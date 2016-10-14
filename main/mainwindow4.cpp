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

//Button for quitting the program
void MainWindow::on_fts_clicked()
{
    qApp->exit();
}

//Button for adding employee
//Asks for authentication
void MainWindow::on_add_emp_clicked()
{
    emp_verification empVer;
    empVer.setModal(true);
    empVer.exec();

    if(empVer.isSignedIn == true)
    {
         addEmployee addEmp;
         addEmp.setModal(true);
         addEmp.exec();
    }
}

//Button for removing/terminating employee
//Asks for authentication
void MainWindow::on_remove_emp_clicked()
{
    emp_verification empVer;
    empVer.setModal(true);
    empVer.exec();

    if(empVer.isSignedIn == true)
    {

    }
}

//Button for viewing/editting employee
//Asks for authentication
void MainWindow::on_view_emp_clicked()
{
    emp_verification empVer;
    empVer.setModal(true);
    empVer.exec();

    if(empVer.isSignedIn == true)
    {

    }
}

//Button for editting inventory
//Can add to inventory
//Can remove from inventory
//Asks for authentication
void MainWindow::on_edit_Inv_clicked()
{
    emp_verification empVer;
    empVer.setModal(true);
    empVer.exec();

    if(empVer.isSignedIn == true)
    {

    }
}

//Button for checking in
//Does not require authentication
void MainWindow::on_check_in_clicked()
{

}

//Button for checking out
//Does not require authentication
void MainWindow::on_check_out_clicked()
{

}

//Button for adding customers to database
//Does not require authentication
void MainWindow::on_add_Customer_clicked()
{
    addCustomer addCus;
    addCus.setModal(true);
    addCus.exec();
}

//Button for removing customers from database
//Does not require authentication
void MainWindow::on_remove_Customer_clicked()
{

}

//Button for viewing/editting customers' information
//Does not require authentication
void MainWindow::on_view_Customers_clicked()
{

}

//Button ONLY for viewing inventory
//Cannot edit/remove/add to inventory
//Does not require authentication
void MainWindow::on_view_Inv_clicked()
{

}
