#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int h[7], a, b;
    int *m;
    for(int i=0;i<7;i++)
    {
        cin >> a >> b;
        h[i]=a+b;
    }
    m = max_element(h,h+7);
    for(int i=0;i<7;i++)
    {
        if(h[i]==*m)
        {
            cout << i+1 << endl;
            break;
        }
    }

}