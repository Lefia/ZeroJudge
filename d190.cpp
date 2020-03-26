#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n)
    {
        if(!n)
            break;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            vec.push_back(m);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
            cout << vec[i] << " ";
        cout << endl;
    }
}