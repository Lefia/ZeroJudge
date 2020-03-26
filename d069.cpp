#include<iostream>

using namespace std;

int main()
{
    int n,year;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            cin >> year;
            if(year%400==0)
                cout << "a leap year" << endl;
            else if(year%100==0)
                cout << "a normal year" << endl;
            else if(year%4==0)
                cout << "a leap year" << endl;
            else
                cout << "a normal year" << endl;
        }
    }
}