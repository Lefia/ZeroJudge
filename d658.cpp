#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k=0;
    while(cin >> n)
    {
        if(n<0)
            break;
        int s=1,t=0;
        while(true)
        {
            if(s>=n)
                break;
            s*=2;
            t++;
        }
        k++;
        cout << "Case " << k << ": " << t << endl;
    }
}