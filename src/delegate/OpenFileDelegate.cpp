#include "OpenFileDelegate.h"

#include <QDebug>

OpenFileDelegate::OpenFileDelegate(DocumentModel* model,
                                   QObject* parent)
    : Delegate(parent)
    , documentModel(model) {}

void OpenFileDelegate::Implement(const QString& fileName) { // 这里是调用模型的实现，若不用模型则直接完善该函数接口即可
    if(documentModel)
    {
        documentModel->openFile(fileName); // 模型调用处理函数
    }
}
