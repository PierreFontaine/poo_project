#ifndef TODOLISTAJOUT_H
#define TODOLISTAJOUT_H

#include <QApplication>
#include <QTimeEdit>
#include <QFormLayout>
#include <QLineEdit>
#include <QObject>
#include <QPushButton>
#include <QWidget>
#include <QCalendarWidget>


#include "todolistdata.h"

class ToDoListAjout : public QWidget
{
    Q_OBJECT
protected:
    QCalendarWidget *_calendrier;
    QFormLayout *_layoutLine;
    QHBoxLayout *_layoutBtn;
    QHBoxLayout *_layoutCalendrier;
    QLineEdit *_titre;
    QLineEdit *_objectif;
    QTimeEdit *_heure;
    QPushButton *_quitBtn;
    QPushButton *_validerBtn;
    QVBoxLayout *_layoutPrincipal;

    void initButton();
    void initCalendrier();
    void initLayout();
    void initLine();

public:
    explicit ToDoListAjout(QWidget *parent = 0);

signals:

public slots:
};

#endif // TODOLISTAJOUT_H
