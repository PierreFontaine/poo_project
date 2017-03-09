#ifndef MODULE_H
#define MODULE_H

#include <QWidget>

class Module : public QWidget{
    Q_OBJECT
protected:
    double _height;
    double _width;
public:
    explicit Module(QWidget *parent = 0,double h, double w);
    void setHeight();
    void setWidth();
    double getHeight();
    double getWidth();


signals:

public slots:
};

#endif // MODULE_H
