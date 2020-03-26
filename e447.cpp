#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a==1)
            {
                int b;
                cin >> b;
                q.push(b);
            }
            else if(a==2)
            {
                if(q.empty())
                    cout << -1 << endl;
                else
                    cout << q.front() << endl;
            }
            else if(a==3)
            {
                if(!q.empty())
                    q.pop();
            }
        }
    }
}