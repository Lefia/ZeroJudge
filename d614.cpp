#include<bits/stdc++.h>
using namespace std;

void splitStr(string s, vector<string> &vec);
long long int StringToInt(string str);
int main()
{
    int t;
    while(cin >> t)
    {
        cin.ignore();
        for(int j=0;j<t;j++)
        {
            long long sum=0;
            string str;
            vector<string> vec;
            getline(cin,str);
            splitStr(str,vec);
            for(int i=0;i<vec.size();i++)
                sum+=StringToInt(vec[i]);
            cout << sum << endl;
        }
    }
}
long long int StringToInt(string str)
{
    long long int sum=0;
    long long k=1;
    for(int i=str.size()-1;i>=0;i--)
    {
        sum+=(str[i]-'0')*k;
        k*=10;
    }
    return sum;
}
void splitStr(string s, vector<string> &vec)
{
	int current = 0;
	int next;
	while(true)
	{
		next = s.find_first_of(" + ", current);
		if(next != current)
		{
			string tmp = s.substr(current, next - current);
			if (tmp.size() != 0)
                vec.push_back(tmp);
		}
		if(next == string::npos)
            break;
		current = next + 1;
	}
}