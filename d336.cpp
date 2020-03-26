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
        for(int i=0;i<t;i++)
        {
            cin >> str;
            int sum=0;
            for(int j=0;j<str.size();j++)
            {
                if(str[j]=='1' && j%2==0)
                {
                    sum+=1;
                }
                else if(str[j]=='1' && j%2==1)
                {
                    sum+=2;
                }
            }
            if(sum%3==0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}