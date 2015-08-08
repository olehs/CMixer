#include "cmixer.h"

CMixer::CMixer(QObject *parent) :
    QObject(parent)
{
}

void CMixer::run()
{
    // Do processing here

    emit finished();
}
