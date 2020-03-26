#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double v, r;
    while(cin >> v >> r)
    {
        cout << fixed << setprecision(4) << v/r*1000 << endl;
    }
}