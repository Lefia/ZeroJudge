#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    string str;
    while(cin >> ch >> str)
    {
        if(ch=='0'&&str=="0")
            break;
        vector<char> vec;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=ch)
                vec.push_back(str[i]);
        }
        bool flag=false;
        for(int i=0;i<vec.size();i++)
        {
            if(flag==false)
            {
                if(vec[i]!='0')
                {
                    cout << vec[i];
                    flag=true;
                }
            }
            else
            {
                cout << vec[i];
            }
        }
        if(flag==false)
            cout << '0';
        cout << endl;

    }
}