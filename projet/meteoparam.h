#ifndef METEOPARAM_H
#define METEOPARAM_H

#include "meteodata.h"

#include <QWidget>
#include <QLayout>
#include <QLabel>
#include <QComboBox>
#include <QFormLayout>
#include <QPushButton>
#include <QDebug>
#include <QString>

class MeteoParam : public QWidget{
        Q_OBJECT
    protected:

        MeteoData *_data;
        QVBoxLayout *vLayout;
        QFormLayout *formLayout;
        QComboBox *_villeListe;
        QComboBox *_mesure;
        QPushButton *submitBtn;

        void initLayout();
        void initComboBox();
    public:
        explicit MeteoParam(QWidget *parent = 0, MeteoData *m = 0);
        QString getVille()const;
        QString getMesure()const;

    signals:

    public slots:
        void debug();
        void majParams();
};

#endif // METEOPARAM_H
