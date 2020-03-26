#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int sum[8];
    while(cin >> a >> b >> c)
    {
        sum[0]=a+10*b+c;
        sum[1]=10*a+b+c;
        sum[2]=a*(10*b+c);
        sum[3]=(10*a+b)*c;
        sum[4]=a+b+c;
        sum[5]=a+b*c;
        sum[6]=a*b+c;
        sum[7]=a*b*c;
        cout << *max_element(sum,sum+8) << endl;
        }
}