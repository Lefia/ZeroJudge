#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int cnt=0;
        bool line=true;
        stack<int> sk;
        for(int i=1;i<=n*n;i++)
        {
            if(line)
            {
                cout << i << " ";
                cnt++;
                if(cnt==n)
                {
                    cnt=0;
                    line=false;
                    cout << endl;
                }
            }
            else
            {
                sk.push(i);
                cnt++;
                if(cnt==n)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout << sk.top() << " ";
                        sk.pop();
                    }
                    line=true;
                    cnt=0;
                    cout << endl;
                    continue;
                }
            }
        }
        cout << endl;
    }
}