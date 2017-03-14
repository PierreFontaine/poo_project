#ifndef METEOJOUR_H
#define METEOJOUR_H

#include <QWidget>
#include <QLayout>

class MeteoJour : public QWidget{
    Q_OBJECT
protected:
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QVBoxLayout *rightLayout;

    //Init
    void initLayout();
public:
    explicit MeteoJour(QWidget *parent = 0);

signals:

public slots:
};

#endif // METEOJOUR_H
