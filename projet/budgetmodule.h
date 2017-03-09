#ifndef BUDGETMODULE_H
#define BUDGETMODULE_H

#include<QLayout>
#include"module.h"

class BudgetModule:public Module{
protected:
    //Layers
    QVBoxLayout *main;
    QHBoxLayout *head;
    QHBoxLayout *container;
    QVBoxLayout *containerleft;
    QVBoxLayout *containerRigth;

    //

public:
    BudgetModule();
};

#endif // BUDGETMODULE_H
