#include <bits/stdc++.h>
using namespace std;
class pos
{
    public:
        int x;
        int y;
};

double area(const pos &a, const pos &b, const pos &c)
{
    return abs(0.50*(a.x * b.y + b.x * c.y + a.y * c.x - a.y * b.x - b.y * c.x - a.x * c.y));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n)
    {
        pos p[n];
        for(int i=0;i<n;i++)
            cin >> p[i].x >> p[i].y;
        double Max=-1.0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    double s;
                    s=area(p[i],p[j],p[k]);
                    Max=max(s,Max);
                }
            }
        }
        cout << fixed << setprecision(2) << Max << endl;
    }
}
