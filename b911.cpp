#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int cnt=0;
        int k=1;
        while(true)
        {
            if(n-k<0)
                break;
            k*=2;
            cnt++;
        }
        cout << cnt << endl;
    }
}