#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while (cin >>n)
    {
        m = 0;
        while(true)
        {
            m *= 10;
            m += n%10;
            n /=10;
            if (n==0)
            {
                break;
            }
        }
        cout << m << endl;
    }
}