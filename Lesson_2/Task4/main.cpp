#include <iostream>

using namespace std;

int main()
{
    int Stars[5];
    int StarsForDrawing[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the number of stars:" ;
        cin >> Stars[i];
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 ;j++)
        {
            if(Stars[j] > 0) cout << "*";
            else cout << " ";
        }
        for(int j = 0; j < 5; j++)
        {
            if(Stars[j] > 0) Stars[j] = Stars[j] - 1;
        }
        cout << endl;
    }

    return 0;
}
