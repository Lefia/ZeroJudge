#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    int i=0;
    int tmp;
    while(tmp<=1000000)
    {
       tmp=vec[i]+vec[i+1];
       vec.push_back(tmp);
       i++;
    }
    int t;
    while(cin >> t)
    {
        for(int j=0;j<t;j++)
        {
            int n;
            cin >> n;
            bool flag=false;
            for(int i=0;i<vec.size();i++)
            {
                if(vec[i]==n)
                {
                    cout << i+1 << endl;
                    flag=true;
                    break;
                }
            }
            if(!flag)
                cout << -1 << endl;
        }
    }
}