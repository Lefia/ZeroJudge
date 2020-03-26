#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int> t;
    t['A']=1;t['B']=2;t['G']=3;t['D']=4;t['E']=5;
    t['#']=6;t['Z']=7;t['Y']=8;t['H']=9;t['I']=10;
    t['K']=20;t['L']=30;t['M']=40;t['N']=50;t['X']=60;
    t['O']=70;t['P']=80;t['Q']=90;t['R']=100;t['S']=200;
    t['T']=300;t['U']=400;t['F']=500;t['C']=600;t['$']=700;
    t['W']=800;t['3']=900;
    string str;
    while(cin >> str)
    {
        if(str[0]=='.')
            break;
        int sum=0;
        for(auto ch:str)
        {
            sum+=t[ch];
        }
        cout << sum <<endl;
    }
}