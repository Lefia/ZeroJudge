#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        long long int g;
        long long int m;
        for(int i=0;i<n;i++)
        {
            cin >> m;
            if(i==0)
                g=m;
            else
            {
                g=__gcd(g,m);
                if(g==1)
                    break;
            }
        }
        cout << g << endl;
    }
}