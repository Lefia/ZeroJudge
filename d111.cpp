#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n!=0)
    {
        if(sqrt(n)==(int)sqrt(n))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}