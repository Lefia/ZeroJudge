#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(true)
    {
        getline(cin,str);
        if(str=="")
            break;
        int cnt=1;
        int sum=0;
        string ver;
        for(int i=0;i<str.size();i++)
        {

            if(str[i]!='-')
            {
                if(cnt<=9)
                {
                    sum+=(str[i]-48)*cnt;
                    cnt++;
                }
                else
                {
                    ver+=str[i];
                }
            }

        }
        sum%=11;
        if(sum==10)
        {
            if(ver=="X")
                cout << "Right" << endl;
            else
            {
                for(int i=0;i<12;i++)
                    cout << str[i];
                cout << "X" << endl;
            }
        }
        else
        {
            if(ver[0]-48==sum)
                cout << "Right" << endl;
            else
            {
                for(int i=0;i<12;i++)
                    cout << str[i];
                cout << sum << endl;
            }
        }
    }
}