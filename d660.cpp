#include <iostream>

using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            int n;
            cin >> n;
            int h[n];
            for(int j=0;j<n;j++)
                cin >> h[j];
            int lj=0, hj=0;
            for(int j=0;j<n;j++)
            {
                if(j+1==n)
                    break;
                else if(h[j]>h[j+1])
                    lj++;
                else if(h[j]<h[j+1])
                    hj++;
            }
            cout << "Case " << i+1 << ": " << hj << " " << lj << endl;
        }
    }
}