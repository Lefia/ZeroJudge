#include<bits/stdc++.h>
using namespace std;

int dc(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
    	return 2;
    else
    {
        int half = dc(n/2);
        if (n%2==0)
            return half * half % 10007;
        else
            return half * half * 2 % 10007;
    }
}

int main()
{
    int n;
    while(cin >> n)
    {
        cout << dc(n-1) << endl;
    }
}