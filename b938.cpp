#include <bits/stdc++.h>
using namespace std;

class List
{
    public:
        int num;
        List *next;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool p[1000001]={0};
    int n, m, d;
    cin >> n >> m;
    List *l=new List[n+1];
    for(int i=1;i<n;i++)
    {
        l[i].num=i;
        l[i].next=&l[i+1];
    }
    l[n].num=n;
    l[n].next=nullptr;
    List *tmp;
    while(m--)
    {
        cin >> d;
        if(l[d].next==nullptr || p[d])
            cout << "0u0 ...... ?\n";
        else
        {
            tmp=l[d].next;
            cout << tmp->num << "\n";
            p[tmp->num]=1;
            l[d].next=tmp->next;
        }
    }
}