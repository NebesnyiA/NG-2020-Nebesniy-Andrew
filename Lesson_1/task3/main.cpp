#include <iostream>

using namespace std;

int main()
{
    int shishka=0; //Kolichestvo oreshkov v shishke
    int oreshek=0;
    int s_shishek=0;
    int s_oreshek=0;
    cout << "Skolko oreshkov nuzhno belochke:";
    cin >> oreshek;
    cout << "Skolko oreshkov v odnoy shishke:";
    cin >> shishka;
    cout << "Skolko shishek bylo sobrano:";
    cin >> s_shishek;
    s_oreshek=shishka*s_shishek;
    if (s_oreshek>=oreshek){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
