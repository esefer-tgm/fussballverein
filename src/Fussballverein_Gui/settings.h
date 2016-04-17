#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "ui_settings.h"

namespace Ui {
class settings;
}

class settings : public QDialog
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = 0);
    ~settings();

    QString driverName();
    QString databaseName();
    QString userName();
    QString password();
    QString hostName();
    int port();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked() { reject(); }
    void on_comboDriver_activated(const QString &arg1);

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
