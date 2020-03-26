#include <iostream>

using namespace std;

long int f(long int n);
long int g(long int n);

int main()
{
    long int n;
    while(cin >> n)
    {
        cout << f(n) << " " << g(n) << endl;
    }
}
long int f(long int n)
{
    if(n==1)
        return 1;
    else
        return n+f(n-1);
}
long int g(long int n)
{
    if(n==1)
        return 1;
    else
        return f(n)+g(n-1);
}