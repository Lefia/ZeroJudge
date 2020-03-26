#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int c[n];
		for(int i=0;i<n;i++)
			cin >> c[i];
		sort(c,c+n);
		if(n%2==0)
			cout << c[n/2-1] << endl;
		else
			cout << c[n/2] << endl;
	}
}