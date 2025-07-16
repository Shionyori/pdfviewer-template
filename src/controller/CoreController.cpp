#include "CoreController.h"
#include "controller/command/Command.h"

CoreController::CoreController(QObject* parent) : QObject(parent), delegate(new OpenFileDelegate()) {}

CoreController::~CoreController() {
    delete delegate;
}

void CoreController::post(const QString& cmd) {
    executeCommand(cmd);
}

void CoreController::executeCommand(const QString& cmd) {
    Command* command = Command::createCommand(cmd, delegate);
    if (command) {
        command->execute();
        delete command;
    }
}
