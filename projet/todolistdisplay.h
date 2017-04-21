#ifndef TODOLISTDISPLAY_H
#define TODOLISTDISPLAY_H

#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include "module.h"
#include "todolistdata.h"
#include "displaynote.h"

class ToDoListDisplay : public Module{
    Q_OBJECT
protected:
    QVBoxLayout *_container;
    QVBoxLayout *_labelLyt;
    ToDoListData *_data;
    QPushButton *_majBtn;


    void initLayout();
    void initBtn();
    void connectElt();

    void clearLayout(QLayout*,bool);

public:
    explicit ToDoListDisplay(QWidget *parent = 0);

signals:

public slots:
    void displayEachToDo();
};

#endif // TODOLISTDISPLAY_H
