#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, x, x1, x2;
    while(cin >> a >> b >> c)
    {
        d = b*b-4*a*c;
        if (d>0)
        {
            x1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
            x2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
            cout << "Two different roots x1=" <<  x1 << " , x2=" << x2 << endl;
        }
        else if (d==0)
        {
            x = (-b) / (2*a);
            cout << "Two same roots x=" << x << endl;
        }
        else if (d<0)
        {
            cout << "No real root" << endl;
        }
    }
    return 0;
}