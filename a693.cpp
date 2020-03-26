#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        long long int s[n]={0};
        for(int i=1;i<=n;i++)
        {
            int tmp;
            cin >> tmp;
            if(i==1)
                s[i]=tmp;
            else
                s[i]=s[i-1]+tmp;
        }
        int a, b;
        for(int i=0;i<m;i++)
        {
            cin >> a >> b;
            cout << s[b]-s[a-1] << endl;
        }
    }
}