#include <iostream>

using namespace std;

int main()
{
    int the_size;
    cout << "Enter the size: ";
    cin >> the_size;
    cout << endl;

    for(int i = 0; i < the_size; i++){
        for(int j = 0; j < the_size; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < the_size + 1; i++){
        for(int j = 0; j < i; j ++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < the_size + 1; i++){
        for(int j = 0; j < the_size + 1; j++){
            if(j > the_size - i){
                cout << "*";
            }
            if(j < the_size - i){
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < the_size; the_size--){
        for(int j = 0; j < the_size; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
