#include <iostream>
#include <cmath>
using namespace std;

int total(int a, int b)
{
    int sum;
    sum = b*log10(a)+1;
    return sum;
}

int main()
{
    int s, a, b;
    while(cin >> a >> b)
    {
        s = total(a, b);
        cout << s << endl;
    }
}