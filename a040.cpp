#include <iostream>
#include <vector>
using namespace std;
int pow(int a, int b)
{
	int sum=1;
	for(int i=0;i<b;i++)
		sum*=a;
	return sum;
}
bool f(int x)
{
	vector<int> vec;
	int v=x;
	do
	{
		vec.push_back(x%10);
		x/=10;
	}while(x!=0);
	int s=0;
	for(int j=0;j<vec.size();j++)
	{
		s+=pow(vec[j],vec.size());
	}
	if(s==v)
		return true;
	else
		return false;
}
int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		bool flag=false;
		for(int i=a;i<=b;i++)
		{
			if(f(i))
			{
				cout << i << " ";
				flag=true;
			}
		}
		if(!flag)
			cout << "none";
		cout << endl;
	}
}