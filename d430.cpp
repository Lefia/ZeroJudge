#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    string str;
    int ans=0;
    while(cin >> str)
    {
        for(auto ch:str)
        {
            if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans;
}