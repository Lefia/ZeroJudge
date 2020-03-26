#include<bits/stdc++.h>
using namespace std;
class pokemon
{
    public:
        int IV;
        long long int CP;

};
bool cmp(const pokemon &a, const pokemon &b)
{
    return a.CP < b.CP;
}
int main()
{
    int n;
    long long int s;
    while(cin >> n >> s)
    {
        long long  m=s/1000;
        pokemon p[n];
        for(int i=0;i<n;i++)
        {
            cin >> p[i].CP >> p[i].IV;
            if(p[i].IV>=40)
                p[i].CP+=m*100;
            else if(p[i].IV>=30)
                p[i].CP+=m*50;
            else
                p[i].CP+=m*10;
        }
        long long int Max=-1, I;
        for(int i=0;i<n;i++)
        {
            if(p[i].CP>Max)
            {
                Max=p[i].CP;
                I=i+1;
            }
        }
        cout << I << " " << Max << endl;
    }
}