#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    while(cin >> str1 >> str2)
    {
        if(str2[0]>=str1[0])
        {
            cout << str2[0]-str1[0] << endl;
        }
        else
        {
            cout << 26-str1[0]+str2[0] << endl;
        }
    }
}