#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        string str;
        cin >> str;
        for(int i=0;i<str.size();i++)
        {
            if(isupper(str[i]))
                str[i]=tolower(str[i]);
            else
                str[i]=toupper(str[i]);
        }
        cout << str << endl;
    }
}