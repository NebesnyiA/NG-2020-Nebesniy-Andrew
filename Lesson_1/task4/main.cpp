#include <iostream>

using namespace std;

int main()
{
    int money = 0;
    cout << "Skolko deneg ti poluchaesh? ";
    cin >> money;
    if (money < 1000){
        cout << "Rabotai bolshe";
    }
    if(money > 999){
        if(money < 1000000){
            cout << "Tak derzhat!";
        }
        if(money > 999999){
            cout << "Ti millioner!";
        }
    }
    cout << "...no ti molodec!";
    return 0;
}
