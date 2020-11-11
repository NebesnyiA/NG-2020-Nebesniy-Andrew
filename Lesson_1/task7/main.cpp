#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int result = 0;// promizhok z chislami ot 0 do ...
    cout << "Enter number: ";
    cin >> number;
    while (result < number){
        cout << result << ", ";
        result++;
    }
    cout << number;
    return 0;
}
