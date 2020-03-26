#include <iostream>

using namespace std;

int main()
{
    int l;
    while (cin >> l)
    {
        if (l>0)
        {
            cout << l*2-1 << endl;
        }
        else
        {
            cout << -(l*2) << endl;
        }
    }
    return 0;
}