#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int k[n];
        for(int i=0;i<n;i++)
            cin >> k[i];
        sort(k,k+n);
        for(int i=0;i<n;i++)
        {
            cout << k[i];
            if(i==n-1)
                break;
            cout << " ";

        }
        cout << endl;
        int M=-1;
        for(int i=0;i<n;i++)
            if(k[i]<60)
                if(k[i]>M)
                    M=k[i];
        if(M==-1)
            cout << "best case" << endl;
        else
            cout << M << endl;

        int m=101;
        for(int i=0;i<n;i++)
            if(k[i]>=60)
                if(k[i]<m)
                    m=k[i];
        if(m==101)
            cout << "worst case" << endl;
        else
            cout << m << endl;
    }
}