#include "OpenFileDelegate.h"
#include <QDebug>

void OpenFileDelegate::openFile(const QString& fileName) {
    qDebug() << "Opening file:" << fileName;
    // Add the logic to open the file here
    qDebug() << "File opened successfully.";
}
