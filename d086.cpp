#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        int sum=0;
        bool flag=true;
        if(str[0]=='0' && str.length()==1)
        {
            break;
        }
        for(int i=0;i<str.length();i++)
        {
            str[i]=toupper(str[i]);
            if(str[i]>=64 && str[i]<=90)
            {
                sum+=str[i]-64;
            }
            else if(str[i]!=0)
            {
                flag=false;
                cout << "Fail" <<endl;
                break;
            }
        }
        if(flag)
        {
            cout << sum <<endl;
        }
    }
}