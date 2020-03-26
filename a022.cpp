#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int i,flag=1;
        char ch;
        stack<char> sk;
        for(i=0;i<s.length();i++)
        {
            sk.push(s[i]);
        }
        for(i=0;i<s.length();i++)
        {
            ch=sk.top();
            if(ch!=s[i])
            {
                flag=0;
                break;
            }
            sk.pop();
        }
        if(flag)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
}