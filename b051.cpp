#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if(a.size()==b.size())
        return a>b;
    else
        return a+b>b+a;
}
int main()
{
    int n;
    while(cin >> n)
    {
        vector<string> vec;
        for(int i=0;i<n;i++)
        {
            string str;
            cin >> str;
            vec.push_back(str);
        }
        sort(vec.begin(),vec.end(),cmp);
        for(int i=0;i<n;i++)
            cout << vec[i];
        cout << endl;
    }
}