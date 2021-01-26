#include <iostream>

using namespace std;

int main()
{
    char Str[100];

    cout << "Enter your string, and see some black magic: " << endl;
    cin.getline(Str, 100);

    cout << "BOOM! Now we have: " << endl;

    for(int i = 0; Str[i] != '\0'; i++)
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
            cout << char(Str[i] - 32);
        else
            cout << Str[i];
    }
    return 0;
}
