#include <iostream>

using namespace std;

int main()
{
    int _size = 0;
    cout << "Enter the size of the Christmas tree: ";
    cin >> _size;
    for(int i = 0; i < _size; i++){
    	for(int j = 0; j <= _size - i; j++){
    		cout << " ";
    	}
    	for(int j = _size - 2*i; j <= _size; j++){
    		cout << "*";
    	}
    	cout << endl;
    }
    for(int i = 0; i < 1; i++){
    	for(int j = 0; j <= _size - i; j++){
    		cout << " ";
    	}
    	cout << "*";
    }
    return 0;
}
