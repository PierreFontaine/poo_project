#ifndef TODOLISTAJOUT_H
#define TODOLISTAJOUT_H

#include <QFormLayout>
#include <QLineEdit>
#include <QDateEdit>
#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <QApplication>

#include "todolistdata.h"

class ToDoListAjout : public QWidget
{
    Q_OBJECT
protected:
    QFormLayout *_layoutLine;
    QHBoxLayout *_layoutBtn;
    QLineEdit *_titre;
    QLineEdit *_objectif;
    QDateEdit *_date;
    QPushButton *_quitBtn;
    QPushButton *_validerBtn;
    QVBoxLayout *_layoutPrincipal;

    void initButton();
    void initLayout();
    void initLine();

public:
    explicit ToDoListAjout(QWidget *parent = 0);

signals:

public slots:
};

#endif // TODOLISTAJOUT_H
