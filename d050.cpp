#include<iostream>

using namespace std;

int main()
{
    int h;
    while(cin >> h)
    {
        if(h-15<0)
            cout << h+9 << endl;
        else
            cout << h-15 << endl;
    }

}