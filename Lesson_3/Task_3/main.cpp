#include <iostream>

using namespace std;

int main()
{
    char Str[100];
    char Symbol;

    cout << "Enter your string, and see some black magic: " << endl;
    cin.getline(Str, 100);

    cout << "BOOM! Now we have: " << endl;

    for(int i = 0; Str[i] != '\0'; i++)
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Symbol = Str[i] - 32;
            cout << Symbol;
        }
        else
        {
            Symbol = Str[i];
            cout << Symbol;
        }
    }
    return 0;
}
