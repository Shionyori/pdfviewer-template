#pragma once

#include <QObject>
#include <QString>
#include "delegate/Delegate.h"

class Command : public QObject {
    Q_OBJECT

public:
    explicit Command(Delegate* delegate = nullptr);
    virtual ~Command() {};

    virtual void execute() = 0;

protected:
    Delegate* delegate;
};
