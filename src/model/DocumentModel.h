#pragma once

#include <QObject>
#include <QString>

class DocumentModel : public QObject {
    Q_OBJECT
public:
    explicit DocumentModel(QObject* parent = nullptr);
    void openFile(const QString& path);
};
