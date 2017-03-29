#ifndef ACTUMODULE_H
#define ACTUMODULE_H

#include "module.h"
#include "actudata.h"
#include <QWidget>
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
    QWidget *container;
    QScrollArea *actuScroll;
    QVBoxLayout *scrollLayout;
    QLabel *_title;
    ActuData *_data;
    QVBoxLayout *mainLayout;
    QVBoxLayout *actuLayout;
    QLabel **_tabDesc;
    QLabel **_tabLink;

    void initLabel();
    void initLayout();

public:
    explicit ActuModule(QWidget *parent = 0);

signals:

public slots:
    void afficheList();
};

#endif // ACTUMODULE_H
