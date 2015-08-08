#include <QCoreApplication>

#include "bass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // check the correct BASS was loaded
    if (HIWORD(BASS_GetVersion()) != BASSVERSION) {
        return 2;
    }

    return a.exec();
}
