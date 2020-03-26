#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int max_ans=-1;
        int Max=-1;
        for(int i=0;i<n;i++)
        {
            int k;
            cin >> k;
            if(Max<k)
                Max=k;
            else if(max_ans<Max-k)
                max_ans=Max-k;
        }
        cout << max_ans << endl;
    }
}