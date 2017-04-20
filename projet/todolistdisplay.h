#ifndef TODOLISTDISPLAY_H
#define TODOLISTDISPLAY_H

#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include "module.h"
#include "todolistdata.h"

class ToDoListDisplay : public Module{
    Q_OBJECT
protected:
    QVBoxLayout *_container;
    ToDoListData *_data;
    QPushButton *_majBtn;


    void initLayout();
    void initBtn();
    void connectElt();
public:
    explicit ToDoListDisplay(QWidget *parent = 0);

signals:

public slots:
};

#endif // TODOLISTDISPLAY_H
