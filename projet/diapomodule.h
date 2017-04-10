#ifndef DIAPOMODULE_H
#define DIAPOMODULE_H

#include <QApplication>
#include <QLayout>
#include <QObject>
#include <QWidget>

#include "module.h"

class DiapoModule : public Module
{
    Q_OBJECT

protected:

public:
    explicit DiapoModule(QWidget *parent = 0);

signals:

public slots:
};

#endif // DIAPOMODULE_H
