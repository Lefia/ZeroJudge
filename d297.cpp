#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(cin >> n)
    {
        if(n%2==0)
            cout << n*(n+2)*(2*n+1)/8 << endl;
        else
            cout <<  (2*n*n+3*n-1)*(n+1)/8 << endl;
    }
}