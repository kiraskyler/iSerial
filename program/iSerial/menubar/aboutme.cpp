#include "aboutme.h"
#include "ui_aboutme.h"

#include <QPushButton>

AboutMe::AboutMe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutMe)
{
    ui->setupUi(this);

    connect(ui->pushButtonOK, &QPushButton::clicked, this, &AboutMe::close);
}

AboutMe::~AboutMe()
{
    delete ui;
}
