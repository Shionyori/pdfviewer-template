#ifndef OPENFILECOMMAND_H
#define OPENFILECOMMAND_H

#include "Command.h"

class OpenFileCommand : public Command {
    Q_OBJECT

public:
    explicit OpenFileCommand(OpenFileDelegate* delegate);
    ~OpenFileCommand() override;

    void execute() override;
};

#endif // OPENFILECOMMAND_H
