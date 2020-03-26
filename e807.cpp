#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d[7]={0};
    double t[4]={0};
    double n;
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> n;
            t[j]+=n;
            d[i]+=n;
        }
    }
    for(int i=0;i<7;i++)
    {
        if(d[i]==*max_element(d,d+7))
            cout << i+1 << endl;
    }
    for(int i=0;i<4;i++)
    {
        if(t[i]==*max_element(t,t+4))
        {
            switch(i+1)
            {
                case 1:
                    cout << "morning" << endl;
                    break;
                case 2:
                    cout << "afternoon" << endl;
                    break;
                case 3:
                    cout << "night" << endl;
                    break;
                case 4:
                    cout << "early morning" << endl;
                    break;
            }
        }
    }
}