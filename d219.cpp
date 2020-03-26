#include <iostream>

using namespace std;

int dc(long long int b,long long int p,long long int m)
{
    if(p==1)
        return b%m;
    else if(p==0)
    	return 1;
    else
    {
        int half = dc(b,p/2,m);
        if (p%2==0)
            return half * half % m;
        else
            return half * half * b % m;
    }
}

int main()
{
    long long int b,p,m;
    while(cin >> b >> p >> m)
        cout << dc(b,p,m) << endl;

    return 0;
}