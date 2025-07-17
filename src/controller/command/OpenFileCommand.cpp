#include "OpenFileCommand.h"

#include <QDebug>

OpenFileCommand::OpenFileCommand(Delegate* delegate) : Command(delegate) {}

OpenFileCommand::~OpenFileCommand() {}

void OpenFileCommand::execute() {
    if (delegate) {
        delegate->Implement("Example.pdf");
    } else {
        qDebug() << "Delegate not found";
    }
}
