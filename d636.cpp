#include <bits/stdc++.h>
using namespace std;
int dc(long long int b,long long int p)
{
    if(p==1)
        return b%10007;
    else if(p==0)
    	return 1;
    else
    {
        int half = dc(b,p/2);
        if (p%2==0)
            return half * half % 10007;
        else
            return half * half * b % 10007;
    }
}

int main()
{
    long long int b,p;
    while(cin >> b >> p)
        cout << dc(b,p) << endl;
}