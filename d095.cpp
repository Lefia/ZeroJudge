#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int h, m;
    char colon;
    while(cin >> h >> colon >> m && !(h==0 && m==0))
    {
        float sum;
        sum=fabs(5.5*m-30*h);
        if(sum==360)
            cout << "0.000" << endl;
        else if(sum>180)
            cout << fixed << setprecision(3) << 360-sum << endl;
        else
            cout << fixed << setprecision(3) << sum << endl;
    }
}