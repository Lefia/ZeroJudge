#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    if(a%10!=b%10)
        return a%10<b%10;
    else
        return a/10>b/10;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n)
    {
        int num[n];
        for(int i=0;i<n;i++)
            cin >> num[i];
        sort(num,num+n,cmp);
        for(int i=0;i<n;i++)
            cout << num[i] << " ";
        cout << endl;

    }
}