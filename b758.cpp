#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        a=a+2+(b+30)/60;
        b=(b+30)%60;
        a%=24;
        if(a>=10)
            cout << a << ":";
        else
            cout << '0' << a << ":";
        if(b>=10)
            cout << b << endl;
        else
            cout << '0' << b << endl;
    }
}