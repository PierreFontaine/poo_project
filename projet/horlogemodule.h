#ifndef HORLOGEMODULE_H
#define HORLOGEMODULE_H

#include <QDate>
#include <QLayout>
#include <QObject>
#include <QTime>
#include <QTimer>
#include <QWidget>

#include "module.h"

class HorlogeModule : public Module
{
    Q_OBJECT
protected:
    QLabel *_date;
    QLabel *_heure;
    QTimer *_timer;
    QVBoxLayout *_layout;

    void initHorloge();
    void initLayout();
public:
    explicit HorlogeModule(QWidget *parent = 0);

signals:

public slots:
};

#endif // HORLOGEMODULE_H
