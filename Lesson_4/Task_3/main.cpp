#include <iostream>

using namespace std;

void Input(char Str[], int size)
{
    cout << "Enter your string: " << endl;
    cin.getline(Str, size);
}

void SizeChecker(char Str[], int size, int Size)
{
    for(int i = 0; Str[i] != '\0'; i++)
    {
        Size++;
    }
}

void Condition(char Symbol)
{
    Symbol >= 'A' && Symbol <= 'Z' || Symbol >= 'a' && Symbol <= 'z';
}

void ReturnResult(int Words)
{
    cout << "Your result is: " << Words;
}

int WordsCounter(char Str[], int size, int Words, int Flag, int Size)
{
    for(int i = 0; i < Size; i++)
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
                Words = Words + 1;
            }
        }
    }
    return Words;
}

int main()
{
    char Str[100];
    int Words = 0;
    int Flag = 0;
    int Size = 0;

    Input(Str, 100);
    SizeChecker(Str, 100, Size);
    WordsCounter(Str, 100, Words, Flag, Size);
    cout << Words;
    return 0;
}
