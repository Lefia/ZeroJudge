#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int k[n];
        for(int i=0;i<n;i++)
            k[i]=i+1;
        do
        {
            for(int i=0;i<n;i++)
                printf("%d ",k[i]);
            printf("\n");
        }
        while(next_permutation(k,k+n));
    }
}