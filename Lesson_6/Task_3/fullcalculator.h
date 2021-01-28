#ifndef FULLCALCULATOR_H
#define FULLCALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FullCalculator; }
QT_END_NAMESPACE

class FullCalculator : public QMainWindow
{
    Q_OBJECT

public:
    FullCalculator(QWidget *parent = nullptr);
    ~FullCalculator();

private:
    Ui::FullCalculator *ui;
    int Numbers; // also can be used to show the result
    int FirstNumber;
    int SecondNumber;
    QString TextsNumbers;

private slots:
    void NumSygnals();
    void PlusPushed();
    void MinPushed();
    void DivPushed();
    void MUltPushed();
    void ResPushed();
    void Clear();

};
#endif // FULLCALCULATOR_H
