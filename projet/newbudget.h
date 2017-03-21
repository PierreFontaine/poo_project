#ifndef NEWBUDGET_H
#define NEWBUDGET_H

#include<QComboBox>
#include<QDoubleSpinBox>
#include<QFormLayout>
#include<QLabel>
#include<QLayout>
#include<QPushButton>
#include <QWidget>


class NewBudget : public QWidget
{
    Q_OBJECT
    protected:
        QComboBox *newBListe;
        QDoubleSpinBox *newBValeur;
        QFormLayout *newDLayout;
        QPushButton *validerBtn;
        QVBoxLayout *newBLayout;

        void initComboBox();
        void initDoubleSpinBox();
        void initLayout();

    public:
        explicit NewBudget(QWidget *parent = 0);

    signals:

    public slots:
};

#endif // NEWBUDGET_H
