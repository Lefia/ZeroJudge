#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        string ans;
        cin >> ans;
        int t;
        cin >>  t;
        for(int i=0;i<t;i++)
        {
            string str;
            cin >> str;
            if(str.size()>ans.size())
            {
                str=str.substr(0,ans.size());
            }
            int sum=0;
            for(int i=0;i<ans.size();i++)
            {
                if(str[i]==ans[i])
                    sum+=100/n;
            }
            cout << sum << endl;
        }
    }
}