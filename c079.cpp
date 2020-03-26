#include <iostream>

using namespace std;

int main ()
{
    int n,k;
    while(cin >> n >> k)
    {
        int sum=n;
        while(n/k!=0)
        {
            sum+=n/k;
            n=n/k+n%k;
        }
        cout << sum << endl;
    } 
}