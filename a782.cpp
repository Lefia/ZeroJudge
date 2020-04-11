#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line) && line!="END")
    {
        stringstream ss;
        ss << line;
        string str;
        string ans="";
        while(ss >> str)
        {
            ans+=toupper(str[0]);
        }
        ans=ans+" "+str;
        cout << ans << endl;
    }
}
