#include "CoreController.h"

#include "command/OpenFileCommand.h"
#include "delegate/OpenFileDelegate.h" //如果需要添加命令和代理，在这里引入头文件

#include "model/DocumentModel.h"       //如果需要模型，在这里引入头文件

CoreController::CoreController(QObject* parent) : QObject(parent) {}

CoreController::~CoreController() {}

void CoreController::post(const QString& cmd) { // 作为槽函数接受信号，然后创建相应的命令
    Command* command = createCommand(cmd);
    if (command) {
        executeCommand(command);
        delete command;
    }
}

Command* CoreController::createCommand(const QString& cmd) { // 负责创建命令的函数
    if (cmd == "OpenFile") {
        DocumentModel* model = new DocumentModel(this);      // 构造模型
        Delegate* delegate = new OpenFileDelegate(model);    // 构造代理并注入模型
        return new OpenFileCommand(delegate);                // 创建命令并分配代理
    }
    // 这里可添加if分支来创建新的命令
    else
        return nullptr;
}

void CoreController::executeCommand(Command* command) {
    if (command) {
        command->execute();  // 直接调用命令对象的执行函数
    }
}
