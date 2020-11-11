#include <iostream>

using namespace std;

int main()
{
    float x=0;
    float y=0;
    int z=0;
    float res=0;
    cout << "Vvedite pervoe chislo:";
    cin >> x;
    cout << "Vvedite vtoroe chislo:";
    cin >> y;
    cout << "Vvedite deystvie:";
    cin >> z;
    if (z==1){
        res = x+y;
        cout << "Rezultat: X + Y = " << res;
    }
    if (z==2){
        res = x-y;
        cout << "Rezultat: X - Y = " << res;
    }
    if (z==3){
        res=x*y;
        cout << "Rezultat: X * Y = " << res;
    }
    if (z==4){
        res=x/y;
        cout << "Rezultat: X / Y = " << res;
    }
    return 0;
}
