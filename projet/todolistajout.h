#ifndef TODOLISTAJOUT_H
#define TODOLISTAJOUT_H

#include <QFormLayout>
#include <QLineEdit>
#include <QWidget>

#include "todolistdata.h"

class ToDoListAjout : public QWidget
{
    Q_OBJECT
protected:
    QFormLayout *layout;
    QLineEdit *titre;
    QLineEdit *objectif;
    QLineEdit *date;
    ToDoListData *_data;
public:
    explicit ToDoListAjout(QWidget *parent = 0);

signals:

public slots:
};

#endif // TODOLISTAJOUT_H
