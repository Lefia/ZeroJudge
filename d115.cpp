#include <bits/stdc++.h>
using namespace std;

int output[100];
int num[100];

void dfs(int n, int m, int current, int index)
{
    if(index >= n)
        return;
    if(current==m)
    {
        for(int i=0; i<m; i++)
            cout << output[i] << " ";
        cout << endl;
    }
    else
    {
        for(int i=index+1; i<n; i++)
        {
            output[current] = num[i];
            dfs(n, m, current+1, i);

        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n && n!=0)
    {
        for(int i=0;i<n;i++)
            cin >> num[i];
        sort(num, num+n);
        int m;
        cin >> m;
        dfs(n, m , 0,-1);
    }
}
