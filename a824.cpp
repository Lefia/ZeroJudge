#include <iostream>

using namespace std;

int main()
{

    char ch;
    short a, b;
    int c, s=0;
    while (cin >> a >> b >> c)
    {
        for (int i=1;i<=c;i++)
        {
            if (i%a==0 || i%b == 0)
            {
                s+=i;
            }
        }
    ch = char(s%26+64);
    cout << ch << endl;
    }
}