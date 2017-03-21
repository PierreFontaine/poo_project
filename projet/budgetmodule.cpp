#include "budgetmodule.h"
#include <QPushButton>
#include <QWidget>
#include <QMessageBox>
#include <QApplication>

BudgetModule::BudgetModule(QWidget *parent):Module(parent){

    newBudgetFen = new NewBudget();
    initButton();
}

void BudgetModule::initButton(){
    boutonBudget = new QPushButton("Nouvelles données",this);
    QObject::connect(boutonBudget,SIGNAL(clicked(bool)),this,SLOT(openNewBudget()));
}

void BudgetModule::openNewBudget(){
    newBudgetFen->show();
}
