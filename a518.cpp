#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        if(a==-1 && b==-1)
            break;
        if(b>a)
            swap(a,b);
        if(a-b>50)
            cout << b-a+100 << endl;
        else
            cout << a-b << endl;
    }
}