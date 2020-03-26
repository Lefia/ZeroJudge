#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        bool num[2005]={0};
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            num[m]=1;
        }
        for(int i=1;i<2005;i++)
        {
            if(num[i]==0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}