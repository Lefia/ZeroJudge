#include <bits/stdc++.h>

using namespace std;

int main()
{
    double w, h;
    while(cin >> w >> h)
    {
        h/=100;
        cout << fixed << setprecision(1) << w/(h*h) << endl;
    }
}