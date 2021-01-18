#include <iostream>

using namespace std;

int main()
{
    char Str[100];
    int StrSize = 0;

    cout << "Enter your string, and see some black magic: " << endl;
    cin.getline(Str, 100);

    for(int i = 0; i < 100; i++)
    {
        if(Str[i] != '\0')
        {
            StrSize++;
        }
    }

    for(int i = 0; i < StrSize; i++)
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] = Str[i] - 32;
        }
    }

    cout << "BOOM! Now we have: " << endl << Str;

    return 0;
}
