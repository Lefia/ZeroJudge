#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n)
    {
        int num[n];
        for(int i=0;i<n;i++)
            cin >> num[i];
        cout << *max_element(num,num+n) << endl;;
    }
}