#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int sum=0,a,b;
            cin >> a >> b;
            for(int j=a;j<=b;j++)
            {
                for(int k=1;k<=sqrt(j);k++)
                {
                    if(j==k*k)
                        sum+=j;
                }
            }
            cout << "Case " << i+1 << ": " << sum << endl;
        }

    }
}