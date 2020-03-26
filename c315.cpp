#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int x=0;
    int y=0;
    int cmd;
    int tmp;
    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            cin >> cmd >> tmp;
            if(cmd==0)
            {
                y+=tmp;
            }
            else if(cmd==1)
            {
                x+=tmp;
            }
            else if(cmd==2)
            {
                y-=tmp;
            }
            else if(cmd==3)
            {
                x-=tmp;
            }
        }
        cout << x << " " << y << endl;
    }
}