#ifndef ACTUMODULE_H
#define ACTUMODULE_H

#include "module.h"
#include "actudata.h"
#include <QDebug>
#include <QObject>
#include <string>
#include <iostream>
class ActuModule : public Module{
    Q_OBJECT
protected:
    QLabel *_title;
    ActuData *_data;

    void initLabel();
    void initLayout();

public:
    explicit ActuModule(QWidget *parent = 0);

signals:

public slots:
    void afficheList();
};

#endif // ACTUMODULE_H
