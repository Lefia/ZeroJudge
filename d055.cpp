#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            double x1, y1, x2, y2, x3, y3;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            cout << fixed << setprecision(0)<< abs(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3)/14 << endl;
        }
    }

}