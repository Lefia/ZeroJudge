#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    map<string,bool> mp;
    while(getline(cin,str))
    {
        if(mp[str]==true)
            cout << "YES" << endl;
        else
        {
            mp[str]=true;
            cout << "NO" << endl;
        }
    }
}