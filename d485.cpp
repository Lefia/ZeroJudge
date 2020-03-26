#include <iostream>

using namespace std;

int main()
{
    int a, b, Count=0;
    while(cin >> a >> b)
    {
        for(int i=a;i<=b;i++)
        {
            if(i%2==0)
                Count++;
        }
        cout << Count << endl;
    }
}