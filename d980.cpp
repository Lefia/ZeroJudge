#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int n;
    while (cin >> n)
    {
        for(int i=1;i<=n;i++)
        {
            long long int k[3];
            bool flag=true;
            cin >> k[0] >> k[1] >> k[2];
            sort(k,k+3);
            for(int j=0;j<3;j++)
            {
                if(k[j]<=0)
                {
                    cout << "Case " << i << ": Invalid" << endl;
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {
                if(k[0]+k[1]<=k[2])
                    cout << "Case " << i << ": Invalid" << endl;
                else if(k[0]==k[1]&&k[1]==k[2]&&k[0]==k[2])
                    cout << "Case " << i << ": Equilateral" << endl;
                else if(k[0]==k[1]||k[1]==k[2]||k[0]==k[2])
                    cout << "Case " << i << ": Isosceles" << endl;
                else
                    cout << "Case " << i << ": Scalene" << endl;
            }
        }
    }
}