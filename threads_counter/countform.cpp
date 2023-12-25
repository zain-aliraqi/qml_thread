#include "countform.h"

CountForm::CountForm(QObject *parent)
    : QObject{parent}
{
    mthread = new MyTread(this);
    connect(mthread,SIGNAL(NumberChange(int)),this,SLOT(onNumberChange(int)));
}

void CountForm::onNumberChange(int n)
{
    emit countChange(n);
}

void CountForm::strart_fun()
{
    mthread->stop=false;
    mthread->setnum = 100;
    mthread->start();

}

void CountForm::stop_fun()
{
    mthread->stop = true;
}
