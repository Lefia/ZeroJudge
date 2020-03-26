#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        int s=str.size()-1;
        if(s%2==0)
            cout << str[s]-48 << endl;
        else
            cout << -(str[s]-48) << endl;
    }
}