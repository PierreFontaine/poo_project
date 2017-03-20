#ifndef MODULE_H
#define MODULE_H

#include <QWidget>
#include <QLabel>

class Module : public QWidget{
    Q_OBJECT
protected:
    double _height;
    double _width;
    QString title;

public:
    explicit Module(QWidget *parent = 0,double h = 300, double w = 400);
    void setHeight(const double&);
    void setWidth(const double&);
    double getHeight()const;
    double getWidth()const;
    void setTitle(const QString&);
    QString getTitle()const;

signals:

public slots:
};

#endif // MODULE_H
