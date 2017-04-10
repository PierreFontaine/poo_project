#ifndef HORLOGEMODULE_H
#define HORLOGEMODULE_H

#include <QDate>
#include <QLayout>
#include <QMessageBox>
#include <QObject>
#include <QTime>
#include <QTimer>
#include <QWidget>

#include "module.h"

class HorlogeModule : public Module
{
    Q_OBJECT
protected:
    QDate *_date;
    QLabel *_labelDate;
    QLabel *_labelTime;
    QTime *_heure;
    QTimer *_timer;
    QVBoxLayout *_layout;

    void initHorloge();
    void initLayout();
public:
    explicit HorlogeModule(QWidget *parent = 0);

signals:

public slots:
    void updateDate();
};

#endif // HORLOGEMODULE_H
