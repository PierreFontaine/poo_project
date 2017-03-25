#ifndef ACTUMODULE_H
#define ACTUMODULE_H

#include "module.h"
#include "actudata.h"
#include <QLayout>
#include <QLabel>
#include <QDebug>
#include <QObject>
#include <QScrollArea>
#include <string>
#include <iostream>

class ActuModule : public Module{
    Q_OBJECT
protected:
    QLabel *_title;
    ActuData *_data;
    QVBoxLayout *actuLayout;
    QLabel **_tab;

    void initLabel();
    void initLayout();

public:
    explicit ActuModule(QWidget *parent = 0);

signals:

public slots:
    void afficheList();
};

#endif // ACTUMODULE_H
