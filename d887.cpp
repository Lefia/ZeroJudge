#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        long long int s[27][27]={0};
        s[0][1]=1;
        for(int i=1;i<=n+1;i++)
        {
            for(int j=i;j<=n+1;j++)
            {
                s[i][j] = s[i-1][j] + s[i][j-1];
            }
        }
        cout << s[n+1][n+1] << endl;;
    }
    return 0;
}