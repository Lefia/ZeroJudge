#include<bits/stdc++.h>
using namespace std;

int main()
{
    string psw;
    while(cin >> psw)
    {
        bool n=false, u=false, l=false;
        for(int i=0;i<psw.size();i++)
        {
            if(psw[i]<=64 || (psw[i]>=91 && psw[i]<=96) || psw[i]>=123)
                n=true;
            else if(psw[i]>=65 && psw[i]<=90)
                u=true;
            else if(psw[i]>=97 && psw[i]<=122)
                l=true;
        }
        int strong=0;
        if(psw.size()>=8)
            strong++;
        if(u && l)
            strong++;
        if((u || l) && n)
            strong++;
        if(strong==0)
            cout << "This password is WEAK" << endl;
        else if(strong==1)
            cout << "This password is ACCEPTABLE" << endl;
        else if(strong==2)
            cout << "This password is GOOD" << endl;
        else if(strong==3)
            cout << "This password is STRONG" << endl;
    }
}