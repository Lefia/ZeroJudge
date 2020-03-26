#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        if(str[0]=='-')
        {
            cout << "-";
            str.erase(0,1);
        }
        reverse(str.begin(),str.end());
        bool flag=false;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0' && flag==false)
                continue;
            else
                flag=true;
            cout << str[i];
        }
        cout << endl;
    }
}