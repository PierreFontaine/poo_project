#ifndef CONVERTMODULE_H
#define CONVERTMODULE_H

#include "module.h"
#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QComboBox>
#include <QLabel>
#include <QDebug>
#include <QLineEdit>

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
    QLineEdit *_unit1Edit;
    QLineEdit *_unit2Edit;


    void initLayout();
    void initComboBox();
    void initLabel();
    void initLineEdit();
public:
    explicit convertModule(QWidget *parent = 0);

signals:

public slots:
};

#endif // CONVERTMODULE_H
