#include "budgetmodule.h"

BudgetModule::BudgetModule(QWidget *parent):Module(parent){
    button = new QPushButton("test",this);
    label = new QLabel("hello",this);
    initLayout();
    containerLeft->addWidget(label);
    label->show();
    setFixedSize(300, 150);
    button->show();
}

//Allocation mémoire des layouts

void BudgetModule::initLayout(){
    main = new QVBoxLayout();
    head = new QHBoxLayout();
    container = new QHBoxLayout();
    containerLeft = new QVBoxLayout();
    containerRight = new QVBoxLayout();

    container->addLayout(containerLeft);
    container->addLayout(containerRight);

    main->addLayout(head);
    main->addLayout(container);

    this->setLayout(main);

}
