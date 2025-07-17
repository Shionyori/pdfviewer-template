#include "OpenFileCommand.h"

#include <QDebug>

OpenFileCommand::OpenFileCommand(Delegate* delegate) : Command(delegate) {}

OpenFileCommand::~OpenFileCommand() {}

void OpenFileCommand::execute() { // 命令的执行函数
    if (delegate) {
        delegate->Implement("Example.pdf"); // 若分配了代理，则直接调用代理的实现
    } else {
        qDebug() << "Delegate not found";
    }
}
