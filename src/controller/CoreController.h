#pragma once

#include <QObject>
#include <QString>

#include "command/Command.h"

class CoreController : public QObject {
    Q_OBJECT

public:
    explicit CoreController(QObject* parent = nullptr);
    ~CoreController();

public slots:
    void post(const QString& cmd);

private:
    Command* createCommand(const QString& cmd);
    void executeCommand(Command* command);

};
