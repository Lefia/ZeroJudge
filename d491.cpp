#include <iostream>
using namespace std ;

int main()
{
    long int a, b;
    while(cin >> a >> b)
    {
        long int sum=0;
        if(a>b)
        {
            int tmp;
            tmp = a;
            a = b;
            b = tmp;
        }
        for(long int i=a;i<=b;i++)
        {
            if(i%2==0)
            {
                sum+=i;
            }
        }
        cout << sum << endl;
    }
}