#include <iostream>

using namespace std;

int main()
{
    int StarsInLine[20];
    int Lines = 0;
    int _max = 0;

    for(int i = 0; i < 20; i++)
    {
        cout << "Enter the number: ";
        cin >> StarsInLine[i];
        if(StarsInLine[i]>_max)
        {
            _max = StarsInLine[i];
        }
        if(StarsInLine[i] < 0)
        {
            cout << "You made a mistake. The number must be 0 or more. " << endl;
            i--;
            continue;
        }
        if(StarsInLine[i] == 0)
        {
            break;
        }
        Lines++;
    }

    for(int i = 0; i < Lines+1; i++)
    {
        for(int j = 0; j < (_max - StarsInLine[i])/2; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < StarsInLine[i]; j++)
        {
            cout << "*";
        }
    cout << endl;
    }
    return 0;
}
