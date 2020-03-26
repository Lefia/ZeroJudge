#include<bits/stdc++.h>
using namespace std;

int binarysearch(int data[], int search, int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    while(cin >> n >> k)
    {
        map<int, int> mp;
        int a;
        for(int i=1;i<=n;i++)
        {
            cin >> a;
            mp[a]=i;
        }
        int b;
        for(int i=0;i<k;i++)
        {
            cin >> b;
            cout << mp[b] << endl;
        }
    }
}