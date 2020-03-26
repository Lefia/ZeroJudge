#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s, x, y, z;
    while(cin >> s >> x >> y >> z)
    {
        if(s==0 && x==0 && y==0 && z==0)
            break;
        printf("%.2f\n",s*(1-x*y*z)*(1-x*y*z)/(x*z+z+1)/(x*y+x+1)/(y*z+y+1));
    }
}