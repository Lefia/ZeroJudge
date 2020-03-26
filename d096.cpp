#include <iostream>

using namespace std;

int main()
{
    long n, l, m, d, s;
    while (cin >> n)
    {
        l = (n+1)/2;
        m = l*l;
        d = 2*m-1; 
        s = 3*d-6;
        cout << s << endl;
    }
    return 0;
}