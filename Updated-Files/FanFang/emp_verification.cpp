#include "emp_verification.h"
#include "ui_emp_verification.h"

emp_verification::emp_verification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emp_verification)
{
    ui->setupUi(this);

    //Checks to see if database opened
    MainWindow database;
    if(!database.dataOpen())
        ui->label->setText("Failed to connect to database...");
    else
        ui->label->setText("Connected to database...");
}

emp_verification::~emp_verification()
{
    delete ui;
}

//Cancels out of sign in window
void emp_verification::on_cancelButton_clicked()
{
    QWidget::close();
}


//Requests verification when prompted
//User provides username (employee ID) and password
//If manager, signs in no problem
//If not a manager, returns saying "Insufficient privileges"
void emp_verification::on_signInButton_clicked()
{
    MainWindow database;
    QString username, password;
    username = ui->lineEdit_Username->text();
    password = ui->lineEdit_Password->text();

    if(!database.dataOpen())
    {
        qDebug() << "Failed to connect...";
        return;
    }

    database.dataOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM Employee WHERE EmpID = '"+ username +"' AND Password = '"+ password +"'");

    if(qry.exec())
    {
        int count = 0;
        int managerFlag = 0;

        while(qry.next())
        {
            count++;
            managerFlag = qry.value(3).toInt();
        }

        if(count == 1 && managerFlag == 1)
        {
            ui->label->setText("Signed in");
            isSignedIn = true;
            database.dataClose();
            this->close();
        }
        else if(count == 1 && managerFlag != 1)
            ui->label->setText("Insufficient privileges");
        else if(count < 1)
            ui->label->setText("Incorrect username or password");
    }
}
