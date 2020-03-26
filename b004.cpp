#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.1415926535
using namespace std;

int main ()
{
    double d, l;
    while (cin >> d >> l)
    {
        cout << fixed << setprecision(3) << pi*(l/2)*sqrt(l*l - d*d)/2 << endl;
    }

    return 0;
}