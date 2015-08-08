#include <QCoreApplication>
#include <QtCore>

#include "bass.h"
#include "cmixer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // check the correct BASS was loaded
    if (HIWORD(BASS_GetVersion()) != BASSVERSION) {
        return 2;
    }

    CMixer *mixer = new CMixer(&a);
    QObject::connect(mixer, SIGNAL(finished()), &a, SLOT(quit()));
    QTimer::singleShot(0, mixer, SLOT(run()));

    return a.exec();
}
