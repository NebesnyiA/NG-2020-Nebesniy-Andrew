#include <iostream>

using namespace std;

int main()
{
    int school_number[10];
    int UserSchool = 0;

    for(int i = 0; i<10; i++)
    {
        cout << "Enter the number of the school: ";
        cin >> school_number[i];
    }
    cout << endl << "Now, enter the number of your school: ";
    cin >> UserSchool;
    cout << endl;

    for(int i = 0; i<10; i++)
    {
        if(school_number[i] == UserSchool)
        {
            cout << "There is the school with such number in the list." << endl;
            break;
        }
        if(school_number[i] != UserSchool)
        {
            if (i == 9) cout << "There is no school with such number in this list!" << endl;
            continue;
        }
    }

    return 0;
}
