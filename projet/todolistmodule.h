#ifndef TODOLISTMODULE_H
#define TODOLISTMODULE_H

#include <QCalendarWidget>
#include <QFont>
#include <QPushButton>
#include <QTabWidget>
#include <QTime>
#include <QWidget>

#include "module.h"
#include "todolistdata.h"
#include "todolistajout.h"

class ToDoListModule : public Module
{
    Q_OBJECT
protected:
    QCalendarWidget *_calendar;
    QHBoxLayout *_layoutBtn;
    QVBoxLayout *_layoutCalendar;
    QPushButton *_newBtn;
    QVBoxLayout *_layoutPrincipal;
    ToDoListAjout *_ajoutFen;

    void initButton();
    void initCalendar();
    void initLayout();
public:
    explicit ToDoListModule(QWidget *parent = 0);

signals:

public slots:
    void openAjout(QDate);
};

#endif // TODOLISTMODULE_H
