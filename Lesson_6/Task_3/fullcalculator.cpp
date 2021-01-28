#include "fullcalculator.h"
#include "ui_fullcalculator.h"

FullCalculator::FullCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FullCalculator)
{
    ui->setupUi(this);
    ui->B_Plus->setCheckable(true);
    ui->B_Minus->setCheckable(true);
    ui->B_Division->setCheckable(true);
    ui->B_Multiplication->setCheckable(true);

    connect(ui->B_One, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Two, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Three, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Four, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Five, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Six, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Seven, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Eight, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Nine, &QPushButton::clicked, this, &FullCalculator::NumSygnals);
    connect(ui->B_Zero, &QPushButton::clicked, this, &FullCalculator::NumSygnals);

    connect(ui->B_Plus, &QPushButton::clicked, this, &FullCalculator::PlusPushed);
    connect(ui->B_Minus, &QPushButton::clicked, this, &FullCalculator::MinPushed);
    connect(ui->B_Division, &QPushButton::clicked, this, &FullCalculator::DivPushed);
    connect(ui->B_Multiplication, &QPushButton::clicked, this, &FullCalculator::MUltPushed);
    connect(ui->B_Result, &QPushButton::clicked, this, &FullCalculator::ResPushed);
    connect(ui->B_Clean, &QPushButton::clicked, this, &FullCalculator::Clear);
}

FullCalculator::~FullCalculator()
{
    delete ui;
}

void FullCalculator::NumSygnals()
{
   QPushButton *ButtonIsPushed = (QPushButton *)sender();

   Numbers = (ui->Monitor->text() + ButtonIsPushed->text()).toInt();
   TextsNumbers = QString::number(Numbers);

   ui->Monitor->setText(TextsNumbers);
}

void FullCalculator::PlusPushed()
{
    FirstNumber = ui->Monitor->text().toInt();

    ui->Monitor->clear();
    ui->B_Plus->isChecked();
}

void FullCalculator::MinPushed()
{
    FirstNumber = ui->Monitor->text().toInt();

    ui->Monitor->clear();
    ui->B_Minus->isChecked();
}

void FullCalculator::DivPushed()
{
    FirstNumber = ui->Monitor->text().toInt();

    ui->Monitor->clear();
    ui->B_Division->isChecked();
}

void FullCalculator::MUltPushed()
{
    FirstNumber = ui->Monitor->text().toInt();

    ui->Monitor->clear();
    ui->B_Multiplication->isChecked();
}

void FullCalculator::ResPushed()
{
    if(ui->B_Plus->isChecked())
    {
        SecondNumber = ui->Monitor->text().toInt();
        Numbers = FirstNumber + SecondNumber;
        ui->Monitor->setText(QString::number(Numbers));
        ui->B_Plus->setChecked(false);
    } else if(ui->B_Minus->isChecked())
    {
        SecondNumber = ui->Monitor->text().toInt();
        Numbers = FirstNumber - SecondNumber;
        ui->Monitor->setText(QString::number(Numbers));
        ui->B_Minus->setChecked(false);
    }else if(ui->B_Division->isChecked())
    {
        SecondNumber = ui->Monitor->text().toInt();
        Numbers = FirstNumber / SecondNumber;
        ui->Monitor->setText(QString::number(Numbers));
        ui->B_Division->setChecked(false);
    } else if(ui->B_Multiplication->isChecked())
    {
        SecondNumber = ui->Monitor->text().toInt();
        Numbers = FirstNumber * SecondNumber;
        ui->Monitor->setText(QString::number(Numbers));
        ui->B_Multiplication->setChecked(false);
    }
}

void FullCalculator::Clear()
{
    Numbers = 0;
    FirstNumber = 0;
    SecondNumber = 0;

    ui->Monitor->clear();
}

