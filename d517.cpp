#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    while(cin >> t)
    {
        string str;
        map<string,int> mp;
        int i=1;
        while(t--)
        {
            cin >> str;
            if(mp.find(str)!=mp.end())
            {
                cout << "Old! " << mp[str] << endl;
            }
            else
            {
                cout << "New! " << i << endl;
                mp[str]=i;
                i++;
            }
        }
    }
}