#include "module.h"

Module::Module(QWidget *parent, double h, double w) : QWidget(parent)
{
    this->setFixedSize(w,h);
}
