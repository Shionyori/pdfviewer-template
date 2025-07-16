#include "OpenFileCommand.h"
#include <QDebug>

OpenFileCommand::OpenFileCommand(OpenFileDelegate* delegate) : Command(delegate) {
    // Constructor implementation
}

OpenFileCommand::~OpenFileCommand() {
    // Destructor implementation
}

void OpenFileCommand::execute() {
    if (delegate) {
        delegate->openFile("example.pdf");
    } else {
        qDebug() << "Delegate is null";
    }
}
