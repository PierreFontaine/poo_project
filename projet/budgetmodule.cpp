#include "budgetmodule.h"
#include <QPushButton>
#include <QWidget>
#include <QApplication>

QT_CHARTS_USE_NAMESPACE

BudgetModule::BudgetModule(QWidget *parent):Module(parent){
    newBudgetFen = new NewBudget();

    initButton();
    initBarChart();
    initLineChart();
    initLayout();
}

void BudgetModule::initButton(){
    boutonBudget = new QPushButton("Nouvelles données",this);
    QObject::connect(boutonBudget,SIGNAL(clicked(bool)),this,SLOT(openNewBudget()));
}

void BudgetModule::openNewBudget(){
    newBudgetFen->show();
}

void BudgetModule::initBarChart(){
    QBarSet *set0 = new QBarSet("Jane");
    QBarSet *set1 = new QBarSet("John");
    QBarSet *set2 = new QBarSet("Axel");
    QBarSet *set3 = new QBarSet("Mary");
    QBarSet *set4 = new QBarSet("Samantha");

    *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    *set1 << 5 << 0 << 0 << 4 << 0 << 7;
    *set2 << 3 << 5 << 8 << 13 << 8 << 5;
    *set3 << 5 << 6 << 7 << 3 << 4 << 5;
    *set4 << 9 << 7 << 5 << 3 << 1 << 2;

    series = new QBarSeries ();
    series -> append (set0);
    series -> append (set1);
    series -> append (set2);
    series -> append (set3);
    series -> append (set4);

    chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple barchart example");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    chartViewB = new QChartView(chart,this);
    chartViewB->setRenderHint(QPainter::Antialiasing);

    chartViewB->show();

}

void BudgetModule::initLineChart(){
    serie = new QLineSeries();
    serie->append(0, 6);
    serie->append(2, 4);
    serie->append(3, 8);
    serie->append(7, 4);
    serie->append(10, 5);
    *serie << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

    charts = new QChart();
    charts->legend()->hide();
    charts->addSeries(serie);
    charts->createDefaultAxes();
    charts->setTitle("Simple line chart example");

    chartViewL = new QChartView(charts,this);
    chartViewL->setRenderHint(QPainter::Antialiasing);

    chartViewL->show();
}

void BudgetModule::initLayout(){
    layout = new QGridLayout();

    layout->addWidget(chartViewL,0,0);
    layout->addWidget(chartViewB,0,1);
    layout->addWidget(boutonBudget,1,0,1,2);

    setLayout(layout);
}
