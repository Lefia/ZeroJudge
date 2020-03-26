#include<bits/stdc++.h>
using namespace std;

int fun(int a, int b, int c, int d, int e, int f, int i)
{
    long long int s;
    s=a*pow(i,5)+b*pow(i,4)+c*pow(i,3)+d*pow(i,2)+e*i+f;
    if(s>0)
        return 1;
    else if(s==0)
        return 0;
    else
        return -1;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, c, d, e, f;
    while(cin >> a >> b >> c >> d >> e >> f)
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
        {
            cout << "Too many... = =\"" << endl;
            continue;
        }
        bool flag=false;
        for(int i=-35;i<35;i++)
        {
            if(fun(a,b,c,d,e,f,i)==0)
            {
                flag=true;
                cout << i << " " << i << endl;
            }
            else if(fun(a,b,c,d,e,f,i)+fun(a,b,c,d,e,f,i+1)==0)
            {
                flag=true;
                cout << i << " " << i+1 << endl;
            }

        }
        if(!flag)
            cout << "N0THING! >\\\\\\<" << endl;
    }
}