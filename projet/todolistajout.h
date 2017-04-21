#ifndef TODOLISTAJOUT_H
#define TODOLISTAJOUT_H


#include <QApplication>
#include <QCalendarWidget>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QFormLayout>
#include <QInputDialog>
#include <QIODevice>
#include <QLineEdit>
#include <QMessageBox>
#include <QObject>
#include <QPushButton>
#include <QTextStream>
#include <QTimeEdit>
#include <QWidget>

#include "todolistdata.h"

class ToDoListAjout : public QWidget{
    Q_OBJECT
protected:
    QCalendarWidget *_calendrier;

    QFormLayout *_layoutLine;
    QHBoxLayout *_layoutBtn;
    QHBoxLayout *_layoutCalendrier;
    QVBoxLayout *_layoutPrincipal;

    QDate *_date;
    QLineEdit *_titre;
    QLineEdit *_note;
    QTimeEdit *_heure;

    QPushButton *_quitBtn;
    QPushButton *_validerBtn;

    ToDoListData *_save;

    void initButton();
    void initCalendrier();
    void initLayout();
    void initLine();

public:
    explicit ToDoListAjout(QWidget *parent = 0);
    QDate getDate()const;
    void setDate(QDate);
signals:

public slots:
  void sendDataToFile();
};

#endif // TODOLISTAJOUT_H
