#ifndef BUDGETMODULE_H
#define BUDGETMODULE_H

#include<QLayout>
#include<QLabel>
#include<QPushButton>
#include"module.h"

class BudgetModule:public Module{
    Q_OBJECT
protected:

    QPushButton *boutonBudget;

public slots:

    void openWindowBudgetData();

public:

    explicit BudgetModule(QWidget *parent = 0);
};

#endif // BUDGETMODULE_H
