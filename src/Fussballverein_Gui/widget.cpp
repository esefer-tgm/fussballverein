#include "widget.h"
#include "ui_widget.h"
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mDatabase = QSqlDatabase::addDatabase("QPSQL");
    mDatabase.setHostName("192.168.133.135");
    mDatabase.setPort(5432);
    mDatabase.setUserName("schokouser");
    mDatabase.setPassword("schokouser");

    if(!mDatabase.open()) {
        QMessageBox::critical(this, "Error Accured", mDatabase.lastError().text());
        return;
    }

    mModel = new QSqlTableModel(this);
    mModel->setTable("auftrag");
    mModel->select();
    ui->tableView->setModel(mModel);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_neu_clicked()
{
    mModel->insertRow(mModel->rowCount());
    mModel->select();

}

void Widget::on_loeschen_clicked()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
    mModel->select();
}

void Widget::on_aktualisieren_clicked()
{
    mModel->select();
}
