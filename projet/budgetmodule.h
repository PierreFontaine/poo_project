#ifndef BUDGETMODULE_H
#define BUDGETMODULE_H

#include<QLayout>
#include<QLabel>
#include<QPushButton>
#include<QtCharts>
#include<QWidget>
#include"module.h"
#include"newbudget.h"

QT_CHARTS_USE_NAMESPACE

class BudgetModule:public Module{
    Q_OBJECT
protected:
    NewBudget *newBudgetFen;
    QPushButton *boutonBudget;
    QBarSeries *series;
    QChart *chart;
    QChartView *chartViewB;
    QLineSeries *serie;
    QChart *charts;
    QChartView *chartViewL;
    QGridLayout *layout;
    QGridLayout *layout1;
    QGridLayout *layout2;
    QTabWidget *onglets;
    QWidget *page1;
    QWidget *page2;

    void initButton();
    void initBarChart();
    void initLineChart();
    void initLayout();
    void initTab();

public slots:

    void openNewBudget();

public:

    explicit BudgetModule(QWidget *parent = 0);
};

#endif // BUDGETMODULE_H
