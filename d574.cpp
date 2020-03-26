#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        stringstream ss;
        string ans="";
        string str;
        cin >> str;
        int cnt=1;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==str[i+1])
            {
                cnt++;
            }
            else
            {
                ss << cnt;
                ans+=ss.str();
                ss.str("");
                ss.clear();
                ans+=str[i];
                cnt=1;
            }
        }
        if(ans.size()<str.size())
            cout << ans << endl;
        else
            cout << str << endl;
    }
}