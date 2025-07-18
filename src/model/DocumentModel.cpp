#include "DocumentModel.h"
#include <QDebug>
#include <poppler/qt6/poppler-qt6.h>

DocumentModel::DocumentModel(QObject* parent) : QObject(parent) {}

void DocumentModel::openFile(const QString& path) {
    qDebug() << "打开文件:" << path;

    // 这里可以放模型处理的具体实现（比如调用Poppler之类的）
}
