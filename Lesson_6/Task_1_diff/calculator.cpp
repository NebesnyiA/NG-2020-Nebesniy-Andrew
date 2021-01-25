#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    ui->Result->setReadOnly(true);

    connect(ui->PushForResult, &QPushButton::clicked, this, &calculator::ButtonPushed);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::ButtonPushed()
{
    ui->Result->setText(QString::number(ui->FirstNumber->text().toDouble() + ui->SecondNumber->text().toDouble()));
}

