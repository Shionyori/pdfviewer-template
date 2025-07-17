#pragma once

#include <QMainWindow>
#include <QPushButton>
#include "controller/CoreController.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    CoreController* controller;
    QPushButton* openFileButton;
};
