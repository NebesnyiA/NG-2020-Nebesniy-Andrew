#include <iostream>

using namespace std;

int main()
{
    int money = 0;
    int the_size=0;
    cout << "What is your salary? ";
    cin >> money;
    if (money < 1000){
        cout << "You have to work more";
    }
    if(money > 999){
        if(money < 1000000){
            cout << "Keep it up!";
        }
        if(money > 999999){
            cout << "Yo are a millioner!";
        }
    }
    cout << "...well, good job!";
    return 0;
}
