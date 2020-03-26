#include<bits/stdc++.h>
using namespace std;

class pos
{
    public:
        int x;
        int y;
};
int main()
{
    int t;
    while(cin >> t)
    {
        pos p[t];
        for(int i=0;i<t;i++)
        {
            cin >> p[i].x >> p[i].y;
        }
        for(int i=0;i<t-1;i++)
        {
            for(int j=0;j<t-1-i;j++)
            {
                if(p[j].x>p[j+1].x)
                {
                    swap(p[j],p[j+1]);
                }
                if(p[j].x==p[j+1].x && p[j].y>p[j+1].y)
                {
                    swap(p[j], p[j+1]);
                }
            }
        }
        for(int i=0;i<t;i++)
        {
            cout << p[i].x << " " << p[i].y << endl;
        }

    }
}