#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int d[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> d[i];
            sum+=d[i]*(i+1);
        }
        cout << sum;
    }
}