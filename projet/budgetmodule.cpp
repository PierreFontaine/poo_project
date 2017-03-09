#include "budgetmodule.h"

BudgetModule::BudgetModule()
{

}

//Allocation mémoire des layouts
void BudgetModule::initLayout(){
    main = new QVBoxLayout();
    head = new QHBoxLayout();
    container = new QHBoxLayout();
    containerleft = new QVBoxLayout();
    containerRigth = new QVBoxLayout();
}
