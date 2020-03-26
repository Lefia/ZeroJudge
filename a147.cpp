#include <iostream>
#include <algorithm>
using namespace std ;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }
        for(int i=0;i<n;i++)
        {
            if(i%7!=0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}