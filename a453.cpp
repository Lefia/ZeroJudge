#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            double a, b, c;
            cin >> a >> b >> c;
            if(b*b-4*a*c>=0)
            {
                if(sqrt(b*b-4*a*c)-(int)sqrt(b*b-4*a*c)!=0)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
    }
}