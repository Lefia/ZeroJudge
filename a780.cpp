#include<bits/stdc++.h>
using namespace std;

int main()
{
    double f0,fe,FA;
    while(cin >> f0 >> fe >> FA)
    {
        if(f0==0 && fe==0 && FA==0)
            break;
        cout << fixed << setprecision(2) << f0/fe << " " << FA/(f0/fe) << endl;
    }
}