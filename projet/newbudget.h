#ifndef NEWBUDGET_H
#define NEWBUDGET_H

#include <QWidget>
#include<QLayout>
#include<QLabel>
#include<QComboBox>
#include<QDoubleSpinBox>
#include<QPushButton>

class NewBudget : public QWidget
{
    Q_OBJECT
    protected:
        QComboBox *liste;
        QDoubleSpinBox *valeur;
        QPushButton *validerBtn;

        void initComboBox();
        void initDoubleSpinBox();
    public:
        explicit NewBudget(QWidget *parent = 0);

    signals:

    public slots:
};

#endif // NEWBUDGET_H
