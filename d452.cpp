#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            int pos[m];
            for(int j=0;j<m;j++)
            {
                cin >> pos[j];
            }
            sort(pos,pos+m);
            int mid;
            if(m/2>=1)
            {
                mid = pos[m/2-1];
            }
            else
            {
                mid = pos[0];
            }
            int sum=0;
            for(int j=0;j<m;j++)
            {
                if(pos[j]>mid)
                {
                    sum+=pos[j]-mid;
                }
                else
                {
                    sum+=mid-pos[j];
                }
            }
            cout << sum << endl;
        }
    }
}