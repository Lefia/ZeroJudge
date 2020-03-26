#include <iostream>

using namespace std;

int main()
{
    int n, m, s, t;
    while (cin >> t)
    {
        for (int i=0;i<t;i++)
        {
            cin >> n;
            s = 1;
            while (true)
            {
                m = n%10;
                s *= m;
                n /= 10;
                if (n==0)
                {
                    break;
                }
            }
            cout << s << endl;
        }
    }
}