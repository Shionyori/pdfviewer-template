#include "DocumentModel.h"
#include <QDebug>

DocumentModel* DocumentModel::m_instance = nullptr;

DocumentModel* DocumentModel::instance() {
    if (!m_instance) {
        m_instance = new DocumentModel();
    }
    return m_instance;
}

void DocumentModel::openFile(const QString &fileName) {
    //To be realized
    qDebug() << "Opening file:" << fileName;
}
