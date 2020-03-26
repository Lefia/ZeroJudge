#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long int n;
    map<string,int> mp1;
    map<int,string> mp2;
    mp1["Monday"]=1;mp1["Tuesday"]=2;mp1["Wednesday"]=3;
    mp1["Thursday"]=4;mp1["Friday"]=5;mp1["Saturday"]=6;
    mp1["Sunday"]=0;
    mp2[1]="Monday";mp2[2]="Tuesday";mp2[3]="Wednesday";
    mp2[4]="Thursday";mp2[5]="Friday";mp2[6]="Saturday";
    mp2[0]="Sunday";
    while(cin >> str >> n)
    {
        cout << mp2[(mp1[str]+n)%7] << endl;
    }

}