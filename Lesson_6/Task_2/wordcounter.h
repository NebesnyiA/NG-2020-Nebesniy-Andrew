#ifndef WORDCOUNTER_H
#define WORDCOUNTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WordCounter; }
QT_END_NAMESPACE

class WordCounter : public QMainWindow
{
    Q_OBJECT

public:
    WordCounter(QWidget *parent = nullptr);
    ~WordCounter();

private:
    Ui::WordCounter *ui;
    int Flag;

private slots:
    void WCounter();

};
#endif // WORDCOUNTER_H
