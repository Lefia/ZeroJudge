#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1, b1, c1;
    int a2, b2, c2;
    while(cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2)
    {
        if(a1*b2==a2*b1)
        {
            if(a1*c2==c1*a2)
            {
                cout << "Too many" << endl;
                break;
            }
            else
            {
                cout << "No answer" << endl;
                break;
            }
        }
        else
            cout << fixed << setprecision(2) << "x=" << (double)(c1*b2-b1*c2)/(a1*b2-b1*a2) << endl;
            cout << fixed << setprecision(2) << "y=" << (double)(a1*c2-c1*a2)/(a1*b2-b1*a2) << endl;
    }
}