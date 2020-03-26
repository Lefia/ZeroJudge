#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >>n)
    {
        long long int a,tmp=0;
        for(int i=0;i<n;i++)
        {
            cin >> a;
            tmp+=a;
            cout << tmp << " ";
        }
        cout << endl;
    }
}