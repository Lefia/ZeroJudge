#include <bits/stdc++.h>
using namespace std;
class statue
{
	public:
		int height;
		int weight;
		int number;
};
bool cmp(const statue &a, const statue &b)
{
	if(a.height==b.height)
		return a.weight < b.weight;
	else
		return a.height < b.height;
}
int main()
{
	int n;
	while(cin >> n)
	{
		statue s[n];
		for(int i=0;i<n;i++)
		{
			cin >> s[i].height >> s[i].weight;
			s[i].number=i;
		}
		stable_sort(s,s+n,cmp);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=abs(s[i].number-i);
		}
		cout << sum << endl;
	}
}
