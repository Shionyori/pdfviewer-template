#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <QString>
#include "delegate/OpenFileDelegate.h"

class Command : public QObject {
    Q_OBJECT

public:
    explicit Command(OpenFileDelegate* delegate);
    virtual ~Command() = default;
    virtual void execute() = 0;

    static Command* createCommand(const QString& cmdType, OpenFileDelegate* delegate);

protected:
    OpenFileDelegate* delegate;
};

#endif // COMMAND_H
