#include "CoreController.h"

#include "command/OpenFileCommand.h"
#include "delegate/OpenFileDelegate.h"

#include "model/DocumentModel.h"

CoreController::CoreController(QObject* parent) : QObject(parent) {}

CoreController::~CoreController() {}

void CoreController::post(const QString& cmd) {
    Command* command = createCommand(cmd);
    if (command) {
        executeCommand(command);
        delete command;
    }
}

Command* CoreController::createCommand(const QString& cmd) {
    if (cmd == "OpenFile") {
        DocumentModel* model = new DocumentModel(this); // 构造模型
        Delegate* delegate = new OpenFileDelegate(model); // 构造代理
        return new OpenFileCommand(delegate); // 创建命令
    }
    // 可添加if分支来创建新的命令
    else
        return nullptr;
}

void CoreController::executeCommand(Command* command) {
    if (command) {
        command->execute();
    }
}
