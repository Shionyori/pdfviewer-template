#pragma once

#include "Delegate.h"

#include "model/DocumentModel.h"

class OpenFileDelegate : public Delegate {
    Q_OBJECT

public:
    explicit OpenFileDelegate(DocumentModel* model,
                              QObject* parent = nullptr);

    void Implement(const QString& fileName) override;

private:
    DocumentModel* documentModel;
};
