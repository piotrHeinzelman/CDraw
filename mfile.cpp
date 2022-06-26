#include "mfile.h"
#include <stdio.h>



MFile::MFile( QString dataFileName ) : QFile( dataFileName ){


}




void printError(const char* msg)
{
    QFile file;
    file.open(stderr, QIODevice::WriteOnly);
    file.write(msg, qstrlen(msg));        // write to stderr
    file.close();
}
