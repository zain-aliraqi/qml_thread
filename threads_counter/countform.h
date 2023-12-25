#ifndef COUNTFORM_H
#define COUNTFORM_H

#include <QObject>
#include "mytread.h"

class CountForm : public QObject
{
    Q_OBJECT
public:
    explicit CountForm(QObject *parent = nullptr);
    MyTread *mthread;



signals:
    void countChange(int i);

public slots:
    void onNumberChange(int n);
    void strart_fun();
    void stop_fun();
};

#endif // COUNTFORM_H
