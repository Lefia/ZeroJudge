#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int a, t;
        cin >> a;
        cout << a << " ";
        for (int i=1;i<n;i++)
        {
            t=a;
            cin >> a;
            cout << a-t << " ";
        }
    }
}