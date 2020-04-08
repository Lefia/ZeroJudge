#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int h, m, s;
	while(cin >> h >> m >> s)
    {
        if(m/s<h || (m/s==h && m%s==0))
            cout << h << " " << m << " " << s << ". I will make it!" << endl;
        else
            cout << h << " " << m << " " << s << ". I will be late!" << endl;
    }
}
