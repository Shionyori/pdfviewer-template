#ifndef CORECONTROLLER_H
#define CORECONTROLLER_H

#include <QObject>
#include <QString>
#include "delegate/OpenFileDelegate.h"

class CoreController : public QObject {
    Q_OBJECT

public:
    explicit CoreController(QObject* parent = nullptr);
    ~CoreController();

public slots:
    void post(const QString& cmd);

private:
    void executeCommand(const QString& cmd);
    OpenFileDelegate* delegate;
};

#endif // CORECONTROLLER_H
