#include<iostream>

using namespace std;

int main()
{
    int w;
    while(cin >> w)
    {
        w>50 ? cout << w-1 << endl:cout << w << endl;
    }
}