#include <iostream>
#include <string>

using namespace std;

int main()
{
    short n;
    while(cin >> n)
    {
        for(int i=1;i<=n;i++)
        {
            cout << string(n - i , '_') << string(i, '*') << endl;
        }
    }
    return 0;
}