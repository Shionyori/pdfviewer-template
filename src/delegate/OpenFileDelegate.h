#ifndef OPENFILEDELEGATE_H
#define OPENFILEDELEGATE_H

#include <QObject>
#include <QString>

class OpenFileDelegate : public QObject {
    Q_OBJECT

public:
    void openFile(const QString& fileName);
};

#endif // OPENFILEDELEGATE_H
