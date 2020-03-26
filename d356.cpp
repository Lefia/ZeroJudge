#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        double sum=0;
        double i=1;
        while(sum<=n)
        {
            sum+=1/i;
            i++;
        }
        cout << i-1 << endl;
    }
}