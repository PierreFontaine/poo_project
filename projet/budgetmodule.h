#ifndef BUDGETMODULE_H
#define BUDGETMODULE_H

#include<QLayout>
#include<QLabel>
#include<QPushButton>
#include<QtCharts>
#include"module.h"
#include"newbudget.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QLineSeries>

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


    void initButton();
    void initBarChart();
    void initLineChart();
    void initLayout();
public slots:

    void openNewBudget();

public:

    explicit BudgetModule(QWidget *parent = 0);
};

#endif // BUDGETMODULE_H
