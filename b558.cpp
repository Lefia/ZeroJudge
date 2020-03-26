#include <iostream>

using namespace std;
int f(int x);
int main()
{
    int n;
    while(cin >> n)
    {
        n = f(n);
        cout << n << endl;
    }

}
int f(int x)
{
    if(x==1)
        return 1;
    else
        return f(x-1)+x-1;
}