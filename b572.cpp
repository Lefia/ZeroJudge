#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int t[5],m;
            for(int j=0;j<5;j++)
            {
                cin >> t[j];
            }
            if(t[3]-t[1]<0)
            {
                t[2]--;
                m=t[3]-t[1]+60;
            }
            else
            {
                m=t[3]-t[1];
            }
            m+=(t[2]-t[0])*60;
            if(m>=t[4])
                cout << "Yes" << endl;
            else
                cout << "No" <<endl;

        }
    }
}