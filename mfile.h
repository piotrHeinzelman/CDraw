#ifndef MFILE_H
#define MFILE_H

#include <QFile>

class MFile : public QFile
{
public:
    explicit MFile( QString dataFileName );

private:
    const QString dataFileName=".data.txt";


};

#endif // MFILE_H
