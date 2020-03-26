#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    while(cin >> n >> m)
        for(int i=0;i<n;i++)
        {
            int ary1[m],ary2[m],sum=0;
            for(int j=0;j<m;j++)
                cin >> ary1[j];
            for(int j=0;j<m;j++)
                cin >> ary2[j];
            int k=0, j=0;
            while(true)
            {
                if(k>=m||j>=m)
                {
                    break;
                }
                else if(ary1[k]==ary2[j])
                {
                    sum++;
                    k++;
                    j++;
                }
                else if(ary1[k]>ary2[j])
                    j++;
                else
                    k++;
            }
            cout << sum << endl;
        }
}