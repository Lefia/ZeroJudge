#include<iostream>

using namespace std;

int main()
{
    int n,year,Count=1;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            cin >> year;
            if(year%400==0)
                cout << "Case " << Count << ": a leap year" << endl;
            else if(year%100==0)
                cout << "Case " << Count << ": a normal year" << endl;
            else if(year%4==0)
                cout << "Case " << Count << ": a leap year" << endl;
            else
                cout << "Case " << Count << ": a normal year" << endl;
            Count++;
        }
    }
}