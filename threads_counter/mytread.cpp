#include "mytread.h"
#include <QtCore>

MyTread::MyTread(QObject *parent)
    : QThread{parent}
{}

void MyTread::run()
{
    for (int i = 0; i < setnum; ++i) {
        QMutex mx;
        mx.lock();
        if(stop) break;
        mx.unlock();
        emit NumberChange(i);
        this->msleep(200);
    }
}
