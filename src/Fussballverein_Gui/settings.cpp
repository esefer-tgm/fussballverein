#include "settings.h"
#include "ui_settings.h"
#include <QSqlDatabase>

settings::settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);

    QStringList drivers = QSqlDatabase::drivers();
    ui.comboDriver->addItems(drivers);
}

settings::~settings()
{
    delete ui;
}
