#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    map<string,string> mp;
    mp["HELLO"]="ENGLISH";
    mp["HOLA"]="SPANISH";
    mp["HALLO"]="GERMAN";
    mp["BONJOUR"]="FRENCH";
    mp["CIAO"]="ITALIAN";
    mp["ZDRAVSTVUJTE"]="RUSSIAN";
    int t=0;
    while(getline(cin,str))
    {
        t++;
        if(str=="#")
            break;
        else if(str=="HELLO"||str=="HOLA"||str=="HALLO"||str=="BONJOUR"||str=="CIAO"||str=="ZDRAVSTVUJTE")
            cout << "Case " << t << ": " << mp[str] << endl;
        else
            cout << "Case " << t << ": " << "UNKNOWN" << endl;
    }
}