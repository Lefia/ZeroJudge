#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        for(int i=0;i<str.size();i++)
        {
            if(i==0||i==str.size()-1)
                cout << str[i];
            else
                cout << "_";
        }
        cout << endl;
    }

}