#include<bits/stdc++.h>
using namespace std;

int main()
{
    stringstream ss;
    string str;
    while(getline(cin,str))
    {
        ss.clear();
        ss << str;
        int n;
        int sum=0;
        while(ss >> n)
        {
            sum+=n;
        }
        cout << sum << endl;
    }
}