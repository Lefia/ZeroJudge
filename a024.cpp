#include <iostream>
#include <algorithm>
using namespace std ;

int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        cout << std::__gcd(a,b) << endl;
    }
}