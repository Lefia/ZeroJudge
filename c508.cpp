#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m;
    while(cin >> m)
    {
        vector<int> vec;
        for(int i=0;i<m;i++)
        {
            int n;
            cin >> n;
            vec.push_back(n);
        }
        sort(vec.begin(),vec.end());
        for(int &n:vec)
            cout << n << " ";
        cout << endl;
        auto end_unique=unique(vec.begin(),vec.end());
        vec.erase(end_unique,vec.end());
        reverse(vec.begin(),vec.end());
        for(int &n:vec)
            cout << n << " ";
            cout << endl;
    }
}