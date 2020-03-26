#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int j=0;j<n;j++)
        {
            int m[3];
            cin >> m[0] >> m[1] >> m[2];
            sort(m,m+3);
            cout << "Case " << j+1 << ": " << m[1] << endl;
        }
    }
}