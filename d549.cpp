#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double pa, pb, pc, pd;
    while (cin >> pa >> pb >> pc)
    {
        pd = sqrt(pa*pa + pc*pc - pb*pb);
        cout << fixed << setprecision(2) << pd <<endl;
    }
    return 0;
}