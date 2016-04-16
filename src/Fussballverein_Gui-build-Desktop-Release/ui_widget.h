/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *neu;
    QPushButton *loeschen;
    QTableView *tableView;
    QPushButton *aktualisieren;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        neu = new QPushButton(Widget);
        neu->setObjectName(QString::fromUtf8("neu"));

        gridLayout->addWidget(neu, 1, 0, 1, 1);

        loeschen = new QPushButton(Widget);
        loeschen->setObjectName(QString::fromUtf8("loeschen"));

        gridLayout->addWidget(loeschen, 1, 2, 1, 1);

        tableView = new QTableView(Widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 3);

        aktualisieren = new QPushButton(Widget);
        aktualisieren->setObjectName(QString::fromUtf8("aktualisieren"));

        gridLayout->addWidget(aktualisieren, 1, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        neu->setText(QApplication::translate("Widget", "Neu", 0, QApplication::UnicodeUTF8));
        loeschen->setText(QApplication::translate("Widget", "L\303\266schen", 0, QApplication::UnicodeUTF8));
        aktualisieren->setText(QApplication::translate("Widget", "Aktualisieren", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
