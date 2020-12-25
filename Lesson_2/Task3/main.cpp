#include <iostream>

using namespace std;

int main()
{
    int mas_with_numbers[20];
    int k = 0;
    int _max = 0;

    for(int i = 0; i < 20; i++)
    {
        cout << "Enter the number: ";
        cin >> mas_with_numbers[i];
        if(mas_with_numbers[i]>_max)
        {
            _max = mas_with_numbers[i];
        }
        if(mas_with_numbers[i] < 0)
        {
            cout << "You made a mistake. The number must be 0 or more. " << endl;
            i--;
            continue;
        }
        if(mas_with_numbers[i] == 0)
        {
            break;
        }
        k++;
    }

    for(int i = 0; i < k+1; i++)
    {
        for(int j = 0; j < (_max - mas_with_numbers[i])/2; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < mas_with_numbers[i]; j++)
        {
            cout << "*";
        }
    cout << endl;
    }
    return 0;
}
