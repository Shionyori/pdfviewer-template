#include "OpenFileDelegate.h"

#include <QDebug>

OpenFileDelegate::OpenFileDelegate(DocumentModel* model,
                                   QObject* parent)
    : Delegate(parent)
    , documentModel(model) {}

void OpenFileDelegate::Implement(const QString& fileName) {
    if(documentModel)
    {
        documentModel->openFile(fileName);
    }
}
