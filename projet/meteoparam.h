#ifndef METEOPARAM_H
#define METEOPARAM_H

#include <QWidget>
#include <QLayout>
#include <QLabel>
#include <QComboBox>
#include <QFormLayout>
#include <QPushButton>

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
};

#endif // METEOPARAM_H
