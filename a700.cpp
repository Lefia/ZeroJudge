#include <iostream>
using namespace std;

long long pow(int n)
{
    long long int res=1;
    for(int i=0;i<n;i++)
    {
        res*=2;
    }
    return res;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i, j;
    while(cin >> i >> j)
    {
        int s=(i-1)*8+j-1;
        cout << pow(s) << endl;

    }
}