#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        if(a==0 && b==0)
            break;
        b=sqrt(b);
        double c;
        c=sqrt(a);
        if(c-(int)sqrt(a)==0)
            a=sqrt(a);
        else
            a=sqrt(a)+1;
        cout << b-a+1 << endl;
    }
}