#include<bits/stdc++.h>
using namespace std;

class c
{
    public:
        char ch;
        int m;
};
bool cmp(c &x,c &y)
{
    if(x.m==y.m)
        return x.ch>y.ch;
    else
        return x.m>y.m;
}
int main()
{
    int t;
    while(cin >> t)
    {
        if(t==0)
            break;
        c p[t];
        for(int i=0;i<t;i++)
        {
            int a, b;
            cin >> a >> b;
            if(a>b)
            {
                p[i].ch='>';
                p[i].m=a+b;
            }
            else if(a==b)
            {
                p[i].ch='=';
                p[i].m=a+b;
            }
            else if(a<b)
            {
                p[i].ch='<';
                p[i].m=a+b;
            }
        }
        sort(p,p+t,cmp);
        for(int i=0;i<t;i++)
        {
            cout << p[i].ch << p[i].m << " ";
        }
        cout << endl;
    }
}