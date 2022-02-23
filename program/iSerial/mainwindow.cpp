#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QAction>

#include "menubar/aboutme.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* 菜单栏信号连接 */
    connect(ui->actionAboutMe, &QAction::triggered, this, [=](){
        AboutMe me(this);
        me.exec();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

