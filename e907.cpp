#include<bits/stdc++.h>
using namespace std;
int main()
{
    string password;
    while(getline(cin,password))
    {
        bool rule[6]={0};
        bool NoError=0;
        rule[1]=1;
        int zero=0;
        int one=0;
        if(password.size()>=8 && password.size()<=12)
            rule[2]=1;
        for(int i=0;i<password.size();i++)
        {
            if(password[i]=='0')
                zero++;
            else if(password[i]=='1')
                one++;
            else
                rule[1]=0;
            if(i<=password.size()-3)
            {
                if(password[i]=='1' && password[i+1]=='0' && password[i+2]=='1')
                    rule[5]=1;
            }
        }
        if(zero>=2)
            rule[3]=1;
        if(one>=3)
            rule[4]=1;
        for(int i=1;i<=5;i++)
        {
            if(!rule[i])
            {
                cout << i << " ";
                NoError=1;
            }
        }
        if(!NoError)
            cout << 0 << endl;
        else
            cout << endl;
    }
}