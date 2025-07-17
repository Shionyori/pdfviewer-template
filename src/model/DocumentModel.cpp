#include "DocumentModel.h"
#include <QDebug>

DocumentModel::DocumentModel(QObject* parent) : QObject(parent) {}

void DocumentModel::openFile(const QString& path) {
    qDebug() << "打开文件:" << path;
    // 这里可以放具体实现
}
