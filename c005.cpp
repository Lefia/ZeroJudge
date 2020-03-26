#include <iostream>
using namespace std ;

int main()
{
    long long int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            long long int sum=0, m;
            cin >> m;
            for(int j=0;j<m;j++)
            {
                long long int a, b, c;
                cin >> a >> b >> c;
                sum+= a*c;
            }
            cout << sum << endl;
        }
    }
}