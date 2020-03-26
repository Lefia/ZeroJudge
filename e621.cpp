#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int j=0;j<n;j++)
        {
            bool flag=false;
            int a, b, c;
            cin >> a >> b >> c;
            for(int i=a+1;i<b;i++)
            {
                if(i%c!=0)
                {
                    flag=true;
                    cout << i << " ";
                }
            }
            if(!flag)
            {
                cout << "No free parking spaces.";
            }
            cout << endl;
        }

    }
}