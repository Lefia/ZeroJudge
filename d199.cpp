#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    while(cin >> a >> b >> c)
    {
        d=sqrt((a+b+c)*(a+b+c)-4*a*c);
        cout << d << endl;
    }
}