#ifndef EMP_VERIFICATION_H
#define EMP_VERIFICATION_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>


namespace Ui {
class emp_verification;
}

class emp_verification : public QDialog
{
    Q_OBJECT

public:
    bool isSignedIn = false;
    explicit emp_verification(QWidget *parent = 0);
    ~emp_verification();

private slots:

    //Cancels out of sign in window
    void on_cancelButton_clicked();

    void on_signInButton_clicked();

private:
    Ui::emp_verification *ui;
    QSqlDatabase blockbusted_db;
};

#endif // EMP_VERIFICATION_H
