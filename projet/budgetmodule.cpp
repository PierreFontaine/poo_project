#include "budgetmodule.h"
#include <QPushButton>
#include <QWidget>
#include <QMessageBox>
#include <QApplication>

BudgetModule::BudgetModule(QWidget *parent):Module(parent){

    boutonBudget = new QPushButton("Nouvelles données",this);

    QObject::connect(boutonBudget,SIGNAL(clicked()),this,SLOT(openWindowBudgetData()));
}

void BudgetModule::openWindowBudgetData(){
    QMessageBox::information(this, "Titre de la fenêtre", "Bonjour et bienvenueà tous les Zéros !");
}
