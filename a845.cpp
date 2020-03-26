#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int price[n];
        for(int i=0;i<n;i++)
            cin >> price[i];
        int t;
        cin >> t;
        for(int i=0;i<t;i++)
        {
            int a, b;
            cin >> a >> b;
            cout << price[a]+price[b] << endl;
        }
    }
}