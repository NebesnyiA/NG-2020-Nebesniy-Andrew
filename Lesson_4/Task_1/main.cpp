#include <iostream>

using namespace std;

void Cleaner(int credit_card[], int size)
{
    for(int i = 0; i < size; i++)
    {
        credit_card[i] = 0;
    }
}

int Balance(int credit_card[], int size)
{
    cout << "Your balance is: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << credit_card[i] << " ";
    }
    cout << endl;
}

int ATM(int credit_card[], int size, int sum, int number_of_card)
{
    cout << "Enter the sum of money: ";
    cin >> sum;
    for(int i = 0; i < size; i++)
    {
        if(i == number_of_card)
        {
            credit_card[i] = credit_card[i] + sum;
        }
    }
    Balance(credit_card, 10);
}

int Checker(int credit_card[], int size, int number_of_card, int sum)
{
    cout << "Enter the number of credit card: ";
    cin >> number_of_card;
    if(number_of_card > 10 || number_of_card <= 0)
    {
        cout << "You entered the false number. Try one more time" << endl;
    }else{
        ATM(credit_card, 10, sum, number_of_card);
    }
    Checker(credit_card, 10, number_of_card, sum);
}

int main()
{
    int credit_card[10];
    int number_of_card = 0;
    int sum = 0;
    Cleaner(credit_card, 10);
    Balance(credit_card, 10); // Show the balance of the user
    cout << "==================================" << endl;
    Checker(credit_card, 10, number_of_card, sum);
}
