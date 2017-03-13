#ifndef BUDGETMODULE_H
#define BUDGETMODULE_H

#include<QLayout>
#include<QLabel>
#include<QPushButton>
#include"module.h"

class BudgetModule:public Module{
protected:
    //Layers
    QVBoxLayout *main;
    QHBoxLayout *head;
    QHBoxLayout *container;
    QVBoxLayout *containerLeft;
    QVBoxLayout *containerRight;
    QPushButton *button;
    QLabel *label;

    //initialisation des composants
    void initLayout();

public:
    explicit BudgetModule(QWidget *parent = 0);
};

#endif // BUDGETMODULE_H
