#pragma once

#include "Command.h"

class OpenFileCommand : public Command {
    Q_OBJECT

public:
    explicit OpenFileCommand(Delegate* delegate);
    ~OpenFileCommand() override;

    void execute() override;
};
