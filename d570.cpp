#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        while(n>0)
        {
            cout << n << endl;
            n/=10;
        }
    }
}