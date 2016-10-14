#include "addemployee.h"
#include "ui_addemployee.h"

addEmployee::addEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEmployee)
{
    ui->setupUi(this);

}

addEmployee::~addEmployee()
{
    delete ui;
}

void addEmployee::on_addCustomerButton_clicked()
{
    DbManager db_test;

    QString firstName, lastName, address, city, state, zipCode, phoneNumber, emailAddress;

    firstName = ui->line_firstName->text();
    lastName = ui->line_lastName->text();
    address = ui->line_address->text();
    city = ui->line_city->text();
    state = ui->line_state->text();
    zipCode = ui->line_zipcode->text();
    phoneNumber = ui->line_phonenumber->text();
    emailAddress = ui->line_email->text();

    db_test.addCustomerToDB(firstName, lastName, address, city, state, zipCode, phoneNumber, emailAddress);
}
