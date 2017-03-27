#ifndef TODOLISTMODULE_H
#define TODOLISTMODULE_H

#include <QPushButton>
#include <QWidget>
#include "module.h"
#include "todolistdata.h"
#include "todolistajout.h"

class ToDoListModule : public Module
{
    Q_OBJECT
protected:
    QPushButton *boutonAjout;
    ToDoListAjout *ajoutFen;

    void initButton();
public:
    explicit ToDoListModule(QWidget *parent = 0);

signals:

public slots:
    void openAjout();
};

#endif // TODOLISTMODULE_H
