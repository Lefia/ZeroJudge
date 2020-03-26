#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        double r=(double)(b-a)/a*100;
        if(r>=0)
            cout << fixed << setprecision(2) << r+0.00001 << "% ";
        else
            cout << fixed << setprecision(2) << r-0.00001 << "% ";
        if(r>=10 || r<=-7)
            cout << "dispose" << endl;
        else
            cout << "keep" << endl;
    }
}