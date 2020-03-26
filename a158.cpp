#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin >> t)
    {
        cin.ignore();
        for(int u=0;u<t;u++)
        {
            string str;
            stringstream ss;
            getline(cin,str);
            ss << str;
            int n;
            vector<int> vec;
            while(ss >> n)
            {
                vec.push_back(n);
            }
            int Max=-1;
            for(int i=vec.size()-1;i>0;i--)
            {
                for(int j=0;j<=i-1;j++)
                {
                    if(__gcd(vec[i],vec[j])>Max)
                        Max=__gcd(vec[i],vec[j]);
                }
            }
            cout << Max << endl;
        }
    }
}