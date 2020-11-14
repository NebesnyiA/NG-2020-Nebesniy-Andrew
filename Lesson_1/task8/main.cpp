#include <iostream>

using namespace std;

int main()
{
    int m = 1;
    int _size = 0;
    cout << "Enter the size of the Christmas tree: ";
    cin >> _size;
    for (int i = 0; i <= _size; i++){
        for(int j = _size; j > i ; j--){
            cout << " ";
        }
        for(int j = 0; j < i ; j++){
            cout << "*";
        }
        for(int j = 0; j <_size - i*_size; j++){
            cout << " ";
        }
        for(int j = 0; j < i -1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int j = _size; j > m; j --){
        cout << " ";
    }
    for(int j = 0; j < m; j++){
        cout << "*";
    }
    return 0;
}
