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
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}