#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int n;
    while(cin >> n)
    {
        for ( int i = 0; i < n; i++ )
        {
            double x, y;
            cin >> x >> y;
            double r = sqrt (x+y);
            double yee= 100-r*r;
            if(yee>0 && yee<=30 )
                cout << "sad!" << endl;
            else if(yee>30 && yee<= 60)
                cout << "hmm~~" << endl;
            else if(yee>60 && yee<100)
                cout << "Happyyummy" << endl;
            else
                cout << "evil!!" << endl;
        }
    }
}