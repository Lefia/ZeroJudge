#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        while(n/10!=0)
        {
            int sum=0;
            while(true)
            {
                sum+=n%10;
                n/=10;
                if(n==0)
                    break;
            }
            n=sum;
        }
        cout << n << endl;
    }
}