#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    while(getline(cin,num))
    {
        if(num[0]=='0')
            break;
        int s1=0, s2=0;
        for(int i=num.size()-1;i>=0;i-=2)
        {
            s1+=num[i]-48;
        }
        for(int i=num.size()-2;i>=0;i-=2)
        {
            s2+=num[i]-48;
        }
        if(abs(s1-s2)%11==0)
            cout << num << " is a multiple of 11." << endl;
        else
            cout << num << " is not a multiple of 11." << endl;
    }
}