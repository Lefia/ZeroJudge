#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int num[n];
        long int s1=0;
        long int s2=0;
        for(int i=0;i<n;i++)
        {
            cin >> num[i];
            s1+=num[i];
            s2+=num[i]*num[i];
        }
        s1*=s1;
        cout << (s1-s2)/2 << endl;;
    }
}