#include "Command.h"

Command::Command(Delegate* delegate) : QObject(nullptr), delegate(delegate) {}

void Command::execute() {}
