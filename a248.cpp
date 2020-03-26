#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int a;
	long long int b;
	long long int n;
	while(cin >> a >> b >> n)
    {
		cout << a/b << '.';
		a%=b;
		for(int i=0;i<n;i++)
		{
			a*=10;
			cout << a/b;
			a%=b;
		}
		cout<<endl;
	}
}