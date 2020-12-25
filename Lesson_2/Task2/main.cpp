#include <iostream>

using namespace std;

int main()
{
    int credit_card[10];
    int sum = 0;
    int i = 0;

    for(int i = 0; i<10; i++) // cleans the trash in the memory
    {
        credit_card[i] = 0;
    }

    do
    {
        cout << "Enter the number of credit card: ";
        cin >> i;
        if(i >= 10)
        {
            cout << "You entered the false number. Try one more time." << endl;
            continue;
        }
        cout << "Enter the sum of money to add to the card: ";
        cin >> sum;
        credit_card[i] = sum + credit_card[i];
        cout << "Your balance in each credit card is: ";
        for (int i = 0; i<10; i++)
        {
            cout  << credit_card[i] << "\t ";
        }
        cout << endl;
    }while(i >= 0);
    return 0;
}
