#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>


namespace Ui {
class Widget;
}

class QSqlTableModel;

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_neu_clicked();

    void on_loeschen_clicked();

    void on_aktualisieren_clicked();

private:
    Ui::Widget *ui;
    QSqlTableModel *mModel;
    QSqlDatabase mDatabase;
};

#endif // WIDGET_H
