#include "MainWindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include "controller/CoreController.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), controller(new CoreController(this)) {
    // Setup UI components
    openFileButton = new QPushButton("Open PDF File", this);
    connect(openFileButton, &QPushButton::clicked, this, [this]() {
        controller->post("OpenFile");
    });

    QLabel *label = new QLabel("Click the button to open a PDF file.", this);

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
