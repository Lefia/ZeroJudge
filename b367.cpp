#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        while(t--)
        {
            int m, n;
            cin >> m >> n;
            int num[m*n];
            int mun[m*n];
            for(int i=0;i<m*n;i++)
            {
                int k;
                cin >> k;
                num[i]=k;
                mun[m*n-i-1]=k;
            }
            bool flag=true;
            for(int i=0;i<m*n;i++)
            {
                if(num[i]!=mun[i])
                {
                    flag=false;
                    break;
                }
            }
            if(!flag)
                cout << "keep defending" << endl;
            else
                cout << "go forward" << endl;

        }
    }
}