#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n)
    {
        int Min=32767, Max=-1;
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            Max=max(m,Max);
            Min=min(m,Min);
        }
        cout << Max << " " << Min << endl;
    }
}