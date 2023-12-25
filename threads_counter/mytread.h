#ifndef MYTREAD_H
#define MYTREAD_H

#include <QThread>

class MyTread : public QThread
{
    Q_OBJECT
public:
    explicit MyTread(QObject *parent = nullptr);
    void run();
    bool stop = false;
    int setnum=10;
signals:
    void NumberChange(int c);

};

#endif // MYTREAD_H
