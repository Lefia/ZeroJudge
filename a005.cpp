#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c, d, r;
    cin >> t;
    while (t>0)
    {
        cin >> a >> b >> c >> d;
        if (a+c==2*b)
        {
            r = b-a;
            cout << a << " " << b << " " << c << " " << d << " " << d+r << endl;
        }
        else if (a*c==b*b)
        {
            r = b/a;
             cout << a << " " << b << " " << c << " " << d << " " << d*r << endl;
        }
        t -= 1;
    }
    return 0;
}