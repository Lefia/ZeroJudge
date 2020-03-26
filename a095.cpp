#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m;
    while(cin >> n >> m)
    {
        if(n>m)
            cout << m+1 << endl;
        else
            cout << m<< endl;
    }
}