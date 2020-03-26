#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
            {
                str[i]=tolower(str[i]);
            }
        }
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
            {
                str[i]=toupper(str[i]);
                cout << str << endl;
                str[i]=tolower(str[i]);
            }
        }
    }
}