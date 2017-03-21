#ifndef METEOPARAM_H
#define METEOPARAM_H

#include <QWidget>
#include <QLayout>
#include <QLabel>
#include <QComboBox>

class MeteoParam : public QWidget{
        Q_OBJECT
    protected:
        QVBoxLayout *main;
        QLabel *_villeTxt;
        QComboBox *_villeListe;

        void initLayout();
        void initComboBox();
        void initLabel();
    public:
        explicit MeteoParam(QWidget *parent = 0);


    signals:

    public slots:
};

#endif // METEOPARAM_H
