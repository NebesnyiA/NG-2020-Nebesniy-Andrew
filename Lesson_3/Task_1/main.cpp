#include <iostream>
using namespace std;



int main()
{
    char str[100];
    int Size = 0; // size of the string, after it had been entered
    int marker = 0; // flag
    int words = 0;

    cout << "Enter the string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++) // without the size, the program does not work well
    {
        Size++;
    }

    for(int i = 0; i <= Size; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
        {
            marker = 1;
        }
        else
        {
            if(marker == 1)
            {
                marker = 0;
                words = words++;
            }
        }

    }

    if(words == 0)
    {
        cout << "There are no words in your string (" << words << ").";
    }
    else
    {
        if(words == 1) cout << "There is only " << words << " word in your string.";
        if(words > 1) cout << "There are " << words << " words in your string.";
    }
}
