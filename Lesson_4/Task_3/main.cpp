#include <iostream>
#include <cstring>

using namespace std;

void Input(char Str[], int size)
{
    cout << "Enter the string (I will show the number of words in it): " << endl;
    cin.getline(Str, size);
}

void Result(int Words)
{
    cout << "Result: " << Words;

}

void WordCounter(char Str[], int size, int Flag, int Words)
{
    for(int i = 0; i <= strlen(Str); i++)
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z' || Str[i] >= 'a' && Str[i] <= 'z')
        {
            Flag = 1;
        }
        else
        {
            if(Flag == 1)
            {
                Flag = 0;
                Words++;
            }
        }
    }
    Result(Words);
}

int main()
{
    char Str[100];
    int Words = 0;
    int Flag = 0;

    Input(Str, 100);
    WordCounter(Str, 100, Flag, Words);

    return 0;
}
