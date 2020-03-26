#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        queue<int> que;
        int card[100]={0},End=0;

        for(int i=1;i<=n;i++)
            que.push(i);
        while(que.size()>1)
        {
            card[End++]=que.front();
            que.pop();
            que.push(que.front());
            que.pop();
        }
        cout << "Discarded cards: ";
        bool flag=false;
        for(int i=0;i<=n-2;i++)
        {
            flag=true;
            if(i==n-2)
                cout << card[i] << endl;
            else
                cout << card[i] << ", ";
        }
        if(!flag)
            cout << endl;
        cout << "Remaining card: " << que.front() << endl;
    }
}