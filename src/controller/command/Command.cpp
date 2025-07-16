#include "Command.h"
#include "OpenFileCommand.h"

Command::Command(OpenFileDelegate* delegate) : QObject(nullptr), delegate(delegate) {}

Command* Command::createCommand(const QString& cmdType, OpenFileDelegate* delegate) {
    if (cmdType == "OpenFile") {
        return new OpenFileCommand(delegate);
    }
    return nullptr;
}
