#ifndef METEOPARAM_H
#define METEOPARAM_H

#include <QWidget>
#include <QLayout>
#include <QLabel>
#include <QComboBox>
#include <QFormLayout>
#include <QPushButton>
#include <QDebug>

class MeteoParam : public QWidget{
        Q_OBJECT
    protected:
        QVBoxLayout *vLayout;
        QFormLayout *formLayout;
        QComboBox *_villeListe;
        QComboBox *_mesure;
        QPushButton *submitBtn;

        void initLayout();
        void initComboBox();
    public:
        explicit MeteoParam(QWidget *parent = 0);


    signals:

    public slots:
        void debug();
};

#endif // METEOPARAM_H
