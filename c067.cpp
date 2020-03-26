#include <iostream>
using namespace std;
int main()
{
int n, f=0, s=0, m=0 , k[99];
while(cin >> n)
{
    if (n==0)
    {
        break;
    }
    for (int i=0;i<n;i++)
    {
        cin >> k[i];
        s+=k[i];
    }
    s=s/n;
    for (int i=0;i<n;i++)
    {
        if (k[i]>s)
        {
            m+=k[i]-s;
            continue;
        }
    }
    f+=1;
    cout << "Set #" << f << endl;
    cout << "The minimum number of moves is " << m << "." << endl;
    s=m=0;
    }
}