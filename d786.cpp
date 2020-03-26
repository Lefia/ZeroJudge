#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            vector<int> vec;
            int n;
            cin >> n;
            for(int j=0;j<n;j++)
            {
                int m;
                cin >> m;
                vec.push_back(m);
            }
            double sum=accumulate(vec.begin(),vec.end(),0);
            sum/=n;
            cout << fixed << setprecision(2) << sum << endl;
        }
    }
}