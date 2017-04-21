#ifndef DISPLAYNOTE_H
#define DISPLAYNOTE_H

#include <QLabel>
#include <QFormLayout>
#include <QWidget>

class DisplayNote : public QWidget
{
    Q_OBJECT
protected:
    QFormLayout *_layoutLine;
    QLabel *_date;
    QLabel *_heure;
    QLabel *_note;
    QLabel *_titre;
    QVBoxLayout *_layoutPrincipal;
public:
    explicit DisplayNote(QString,QString,QString,QString,QWidget *parent = 0);
    explicit DisplayNote(QWidget *parent = 0);

signals:

public slots:
};

#endif // DISPLAYNOTE_H
