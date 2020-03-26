#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        int m[n];
        for(int i=0;i<n;i++)
            cin >> m[i];
        int Max=-1;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=m[j];
                if(sum<0)
                    break;
                else
                {
                    if(Max<sum)
                        Max=sum;
                }
            }
        }
        if(Max<=0)
            cout << "Losing streak." << endl;
        else
            cout << "The maximum winning streak is " << Max  << "." << endl;
    }
}