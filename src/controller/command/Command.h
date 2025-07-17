#pragma once

#include <QObject>
#include <QString>
#include "delegate/Delegate.h"

class Command : public QObject { // 所有命令的基类
    Q_OBJECT

public:
    explicit Command(Delegate* delegate = nullptr);
    virtual ~Command() = default;

    virtual void execute() = 0; // 执行函数的接口

protected:
    Delegate* delegate;
};
