#include <iostream>
using namespace std;
int main()
{
    int d;
    while(cin >> d)
    {
        int n=1,m=1,sum=0,t=0;
        while(true)
        {
            if(t==50)
            {
                cout << sum << endl;
                break;
            }
            sum+=n;
            n+=m;
            m+=d;
            t++;
        }
    }
}