#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            int n,s[20];
            cin >> n;
            cin >> s[0] >> s[1] >> s[2] >> s[3];
            for(int i=4;i<n;i++)
                s[i]=s[i-4]+s[i-1];
            sort(s,s+n);
            cout << s[n/2] << endl;
        }
    }
}