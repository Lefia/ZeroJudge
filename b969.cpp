#include<bits/stdc++.h>
using namespace std;
int main()
{
    stringstream ss;
    string name;
    string hello;
    while(getline(cin,name))
    {
        getline(cin,hello);
        ss << name;
        while(ss >> name)
        {
            cout << hello << ", " << name << endl;
        }
    }
}