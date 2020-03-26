#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            int n;
            cin >> n;
            int p[n];
            for(int j=0;j<n;j++)
                cin >> p[j];
            sort(p,p+n);
            reverse(p,p+n);
            int sum=0;
            for(int j=2;j<n;j+=3)
                sum+=p[j];
            cout << sum << endl;
        }
    }
}