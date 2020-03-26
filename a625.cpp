#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    while(cin >> n)
    {
        double sum=0;
        double i=2;
        while(sum<n)
        {
            sum+=1/i;
            i++;
        }
        cout << i-2 <<  " card(s)" << endl;
    }
}