#include <iostream>
using namespace std;
int main()
{
    int l, m;
    while(cin >> l >> m)
    {
        int n[l+1]={0}, s=0;
        for(int i=0;i<m;i++)
        {
            int a, b;
            cin >> a >> b;
            for(int j=a;j<b+1;j++)
            {
                n[j]=1;
            }
        }
        for(int i=0;i<=l;i++)
        {
            if(n[i]==0)
            {
                s+=1;
            }
        }
        cout << s << endl;
    }
    return 0;
}