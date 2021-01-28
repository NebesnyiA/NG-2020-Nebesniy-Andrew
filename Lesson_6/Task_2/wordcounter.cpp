#include "wordcounter.h"
#include "ui_wordcounter.h"

WordCounter::WordCounter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WordCounter)
{
    ui->setupUi(this);
    ui->SB_Words->setReadOnly(true);

    connect(ui->UserText, &QTextEdit::textChanged, this, &WordCounter::WCounter);
}

WordCounter::~WordCounter()
{
    delete ui;
}

void WordCounter::WCounter()
{
    QString Chars = ui->UserText->toPlainText();
    ui->SB_Words->setValue(0);

    for(int i = 0; i < ui->UserText->toPlainText().length(); i++)
    {
        if((Chars[i] >= 'A' && Chars[i] <= 'Z') || (Chars[i] >= 'a' && Chars[i] <= 'z'))
            Flag = 1;
        else
            if(Flag == 1){
                Flag = 0;
                ui->SB_Words->setValue(ui->SB_Words->value() + 1);
            }
    }
}

