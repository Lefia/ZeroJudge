#include <iostream>

using namespace std;

int f(int x)
{
    int sum=1;
    for(int i=1;i<=x;i++)
        sum*=i;
    return sum;
}
int main()
{
    int n, m;
    while(cin >> n >> m)
        cout << f(n)/(f(m)*f(n-m)) << endl;
    return 0;
}