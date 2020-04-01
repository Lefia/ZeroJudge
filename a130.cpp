#include <bits/stdc++.h>
using namespace std;

class Website
{
	public:
		string url;
		int v;
};
bool cmp(const Website &a, const Website &b)
{
	return a.v < b.v;
}
int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		Website w[10];
		for(int i=0;i<10;i++)
		{
			cin >> w[i].url >> w[i].v;
		}
		sort(w,w+10,cmp);
		cout << "Case #" << i+1 << ":" << endl;
		for(int i=0;i<10;i++)
		{
			if(w[i].v==w[9].v)
				cout << w[i].url << endl;
		}
	}
}
