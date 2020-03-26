#include<bits/stdc++.h>
using namespace std;

long long int p(int n)
{
    long long sum=1;
    for(int i=0;i<n;i++)
    {
        sum*=2;
    }
    return sum;
}
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<=n;i++)
        {
            cout << "2^" << i << " = " << p(i) << endl;
        }
    }

}