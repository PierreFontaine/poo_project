#ifndef TODOLISTAJOUT_H
#define TODOLISTAJOUT_H


#include <QApplication>
#include <QCalendarWidget>
#include <QDebug>
#include <QFile>
#include <QFormLayout>
#include <QLineEdit>
#include <QMessageBox>
#include <QObject>
#include <QPushButton>
#include <QTimeEdit>
#include <QWidget>

#include "todolistdata.h"

class ToDoListAjout : public QWidget
{
    Q_OBJECT
protected:
    QCalendarWidget *_calendrier;

    QFormLayout *_layoutLine;
    QHBoxLayout *_layoutBtn;
    QHBoxLayout *_layoutCalendrier;
    QVBoxLayout *_layoutPrincipal;

    QLineEdit *_titre;
    QLineEdit *_description;
    QTimeEdit *_heure;

    QPushButton *_quitBtn;
    QPushButton *_validerBtn;


    void initButton();
    void initCalendrier();
    void initLayout();
    void initLine();

public:
    explicit ToDoListAjout(QWidget *parent = 0);

signals:

public slots:
        void ajoutTDL();
};

#endif // TODOLISTAJOUT_H
