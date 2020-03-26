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
            int n[3];
            cin >> n[0] >> n[1] >> n[2];
            sort(n,n+3);
            if(n[0]+n[1]<=n[2])
                cout << "Wrong!!" << endl;
            else
                cout << "OK" << endl;

        }
    }
}