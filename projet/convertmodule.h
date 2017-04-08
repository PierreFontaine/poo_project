#ifndef CONVERTMODULE_H
#define CONVERTMODULE_H

#include "module.h"
#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QComboBox>
#include <QLabel>
#include <QDebug>

class convertModule : public Module{
    Q_OBJECT
protected:
    QComboBox *_entite;
    QComboBox *_unit1;
    QComboBox *_unit2;
    QVBoxLayout *_mainLyt;
    QHBoxLayout *_deviseLyt;
    QHBoxLayout *_unitsLyt;
    QGridLayout *_entriesLyt;
    QLabel *_unit1Lbl;
    QLabel *_unit2Lbl;

    void initLayout();
    void initComboBox();
    void initLabel();
public:
    explicit convertModule(QWidget *parent = 0);

signals:

public slots:
};

#endif // CONVERTMODULE_H
