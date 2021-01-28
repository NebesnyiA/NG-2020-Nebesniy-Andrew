#include <iostream>

using namespace std;

int main()
{
    char UserSentence[100];

    cout << "Enter your string, and see some black magic: " << endl;
    cin.getline(UserSentence, 100);

    cout << "BOOM! Now we have: " << endl;

    for(int iterator = 0; UserSentence[iterator] != '\0'; iterator++)
    {
        if(UserSentence[iterator] >= 'a' && UserSentence[iterator] <= 'z')
            cout << char(UserSentence[iterator] - 32);
        else
            cout << UserSentence[iterator];
    }
    return 0;
}
