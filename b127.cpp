#include <iostream>

using namespace std;

int main()
{
    int n, k[46]={1,1};
    while(cin >> n)
    {
        for (int i=2;i<=45;i++)
        {
            k[i]=k[i-1]+k[i-2];
        }
        cout << k[n] << endl;
    }
    return 0;
}