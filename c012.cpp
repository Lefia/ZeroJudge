#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        int ascii[256]={0};
        for(int i=0;i<str.size();i++)
            ascii[str[i]]++;
        for(int i=1;i<=str.size();i++)
        {
            for(int j=255;j>=0;j--)
            {
                if(ascii[j]==i)
                    cout << j << " " << i << endl;
            }
        }
        cout << endl;
    }
}