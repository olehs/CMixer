#ifndef CMIXER_H
#define CMIXER_H

#include <QObject>

class CMixer : public QObject
{
    Q_OBJECT
public:
    explicit CMixer(QObject *parent = 0);

public slots:
    void run();

signals:
    void finished();
};

#endif // CMIXER_H
