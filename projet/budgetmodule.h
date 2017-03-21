#ifndef BUDGETMODULE_H
#define BUDGETMODULE_H

#include<QLayout>
#include<QLabel>
#include<QPushButton>
#include"module.h"
#include"newbudget.h"

class BudgetModule:public Module{
    Q_OBJECT
protected:
    NewBudget *newBudgetFen;
    QPushButton *boutonBudget;

    void initButton();

public slots:

    void openNewBudget();

public:

    explicit BudgetModule(QWidget *parent = 0);
};

#endif // BUDGETMODULE_H
