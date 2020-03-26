#include<iostream>

using namespace std;

int main()
{
    int time;
    while(cin >> time)
    {
        if(time<=25)
            cout << 25-time << endl;
        else 
            cout << 85-time << endl;
    }
}