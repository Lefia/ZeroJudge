#include<bits/stdc++.h>
using namespace std;

long long int s[200001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n)
    {
        for(int i=1;i<=n;i++)
        {
            if(i==1)
                cin >> s[i];
            else
            {
                cin >> s[i];
                s[i]+=s[i-1];
            }
        }
        int q;
        cin >> q;
        while(q--)
        {
            int l,r;
            cin >> l >> r;
            cout << s[r]-s[l-1] << endl;
        }
    }
}