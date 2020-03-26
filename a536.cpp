#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int sum=0;
            a+=b;
            do
            {
                sum+=a/c;
                a=a%c+a/c;
            }
            while(a/c>0);
            cout << sum << endl;
        }
    }
}