#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int num[n];
        for(int i=0;i<n;i++)
            cin >> num[i];
        sort(num,num+n);
        int sum=0;
        for(int i=1;i<n;i+=2)
        {
            sum+=num[i]-num[i-1];
        }
        cout << sum << endl;

    }
}