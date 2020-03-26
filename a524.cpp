#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int p[n];
        for(int i=0;i<n;i++)
            p[i]=i+1;
        reverse(p,p+n);
        do
        {
            for(int i=0;i<n;i++)
                cout << p[i];
            cout << endl;
        }
        while(prev_permutation(p,p+n));
    }
}