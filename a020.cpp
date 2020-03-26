#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int> mp;
    mp['A']=10;mp['J']=18;mp['S']=26;
    mp['B']=11;mp['K']=19;mp['T']=27;
    mp['C']=12;mp['L']=20;mp['U']=28;
    mp['D']=13;mp['M']=21;mp['V']=29;
    mp['E']=14;mp['N']=22;mp['W']=32;
    mp['F']=15;mp['O']=35;mp['X']=30;
    mp['G']=16;mp['P']=23;mp['Y']=31;
    mp['H']=17;mp['Q']=24;mp['Z']=33;
    mp['I']=34;mp['R']=25;
    char id[10];
    while(cin >> id[0])
    {
        for(int i=1;i<10;i++)
            cin >> id[i];
        int sum=mp[id[0]]/10+(mp[id[0]]%10)*9;
        sum+=id[1]*8+id[2]*7+id[3]*6+id[4]*5+id[5]*4+id[6]*3+id[7]*2+id[8]*1+id[9]-1776;
        if(sum%10==0)
            cout << "real" << endl;
        else
            cout << "fake" << endl;
    }


}