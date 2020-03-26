#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        int n[4]={(x2-x1)*(x2-x1),y2-y1,-2*x1*(y2-y1),(y2-y1)*x1*x1 + y1*(x2-x1)*(x2-x1)};
        int g=__gcd(n[0],n[1]);
        g=__gcd(g,n[2]);
        g=__gcd(g,n[3]);
        for(int i=0;i<4;i++)
            n[i]/=g;
        cout << n[0] << "y = " << n[1] << "x^2 + " << n[2] << "x + " << n[3] << endl;
    }
}