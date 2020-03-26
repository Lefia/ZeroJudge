#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            if(m<=10)
                cnt++;
        }
        cout << cnt << endl;
    }
}