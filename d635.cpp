#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n<0)
        {
            cout << dec << -1 << endl;
            break;
        }
        cout << oct << n << endl;
    }
}