#ifndef ACTUMODULE_H
#define ACTUMODULE_H

#include "module.h"
#include "actudata.h"

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
};

#endif // ACTUMODULE_H
