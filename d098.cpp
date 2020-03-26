#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        int sum = 0;
        string tmp;
        stringstream ss(s);
        while( ss >> tmp)
        {
            bool flag=true;
            for(int i=0;i<tmp.size();i++)
            {
                if(tmp[i]>='0' && tmp[i]<='9')
                    continue;
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                stringstream st(tmp);
                int ans = 0;
                st >> ans;
                sum += ans;
            }
        }
        cout << sum << endl;
    }
}