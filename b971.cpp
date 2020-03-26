#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,an,d;
    while(cin>>a1>>an>>d)
    {
        int s=(an-a1)/d;
        for(int cnt=0;cnt<=s;cnt++)
        {
            cout << a1+cnt*d << " ";
        }
    }
}