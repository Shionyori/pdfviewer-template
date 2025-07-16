#ifndef DOCUMENTMODEL_H
#define DOCUMENTMODEL_H

#include <QObject>

class DocumentModel : public QObject {
    Q_OBJECT

public:
    static DocumentModel* instance();
    void openFile(const QString &fileName);

private:
    DocumentModel() {}
    static DocumentModel* m_instance;
};

#endif // DOCUMENTMODEL_H
