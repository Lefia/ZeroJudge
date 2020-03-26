#include <iostream>

using namespace std;

int main()
{
    int n,k[511],i=0;
    while(cin >> n)
    {
        while (n!=0)
        {
            k[i]=n%2;
            n=n/2;
            i++;
        }
        for (i;i>0;i--)
        {
            cout << k[i-1];
        }
        cout << endl;
        i=0;
    }
    return 0;
}