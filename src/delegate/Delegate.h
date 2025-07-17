#pragma once

#include <QObject>
#include <QString>

class Delegate : public QObject {
    Q_OBJECT

public:
    explicit Delegate(QObject* parent = nullptr) : QObject(parent) {}
    virtual ~Delegate() = default;
    virtual void Implement(const QString& data) = 0;
};
