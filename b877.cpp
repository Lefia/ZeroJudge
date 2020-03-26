#include <bits/stdc++.h>

using namespace std;

int main()
{
    short a, b;
    while(cin >> a >>  b)
        cout << (a<b?b-a:100-a+b) << endl;
}