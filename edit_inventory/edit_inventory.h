#ifndef EDIT_INVENTORY_H
#define EDIT_INVENTORY_H

#include <QDialog>
#include "mainwindow.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class edit_inventory;
}

class edit_inventory : public QDialog
{
    Q_OBJECT

public:
    explicit edit_inventory(QWidget *parent = 0);
    ~edit_inventory();

private slots:
    void on_add_product_clicked();

    void on_edit_product_clicked();

    void on_load_inv_clicked();

    void on_inv_view_clicked(const QModelIndex &index);

    void on_remove_product_clicked();

private:
    Ui::edit_inventory *ui;
    QSqlDatabase blockbusted_db;

};

#endif // EDIT_INVENTORY_H
