#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        stack<int> sk;
        for(int i=0;i<t;i++)
        {
            int n;
            cin >> n;
            if(n==1)
                sk.pop();
            else if(n==2)
                cout << sk.top() << endl;
            else
            {
                int a;
                cin >> a;
                sk.push(a);
            }

        }
    }
}