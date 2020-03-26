#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        list<int> l;
        list<int>::iterator iter;
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            l.push_back(m);
        }
        while(!l.empty())
        {
            for(iter=l.begin();iter!=l.end();iter++)
            {
                cout << *iter << " ";
            }
            cout << endl;
            l.pop_front();
            reverse(l.begin(),l.end());
        }
    }
}