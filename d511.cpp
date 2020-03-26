#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l[3],time=0,Count=0;
    while (cin >> l[0] >> l[1] >> l[2])
    {
        sort(l,l+3);
        if(l[0]+l[1]>l[2])
            Count++;
        time++;
        if(time==5)
        {
            cout << Count << endl;
            break;
        }
    }
}