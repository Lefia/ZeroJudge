#include <iostream>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t>0)
    {
        cin >> n >> m;
        cout << (n/3)*(m/3) <<endl;
        t -= 1;
    }
    return 0;
}