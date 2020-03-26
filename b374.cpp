#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int num[30001]={0};
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int in;
            cin >> in;
            num[in]++;
        }
        int m=*max_element(num,num+30001);
        for(int i=0;i<=30000;i++)
        {
            if(num[i]==m)
                cout << i << " " << m << endl;
        }

    }
}