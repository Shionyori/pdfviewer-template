#include "MainWindow.h"
#include <QVBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), controller(new CoreController(this)) {
    //这是测试用的Widget，之后应该改成用ElaWidgetTools实现View视图
    openFileButton = new QPushButton("打开文件", this);
    connect(openFileButton, &QPushButton::clicked, this, [this]() {
        controller->post("OpenFile");
    });

    QLabel *label = new QLabel("架构测试", this);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(label);
    mainLayout->addWidget(openFileButton);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow() {
    delete controller;
}
