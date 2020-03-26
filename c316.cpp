#include <bits/stdc++.h>

using namespace std;

class pos
{
    public:
        int x;
        int y;
};
int main()
{
    int n;
    while(cin >> n)
    {
        pos p[n];
        for(int i=0;i<n;i++)
            cin >> p[i].x >> p[i].y;
        long long int Max=-1;
        int a, b;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((p[j].x-p[i].x)*(p[j].x-p[i].x) + (p[j].y-p[i].y)*(p[j].y-p[i].y)>Max)
                {
                    Max=(p[j].x-p[i].x)*(p[j].x-p[i].x) + (p[j].y-p[i].y)*(p[j].y-p[i].y);
                    a=i;
                    b=j;
                }
            }
        }
        cout << a << " " << b << endl;
    }
}