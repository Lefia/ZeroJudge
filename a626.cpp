#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    vector<bool> flag(1001,true);
	flag[0]=flag[1]=false;
	for(int i=2; i<=1000;i++)
    {
        if(flag[i])
        {
            for(int j=i*i;j<=1000;j+=i)
            {
                flag[j]=false;
            }
        }
    }
    int n;
    while(cin >> n)
    {
        int t=0;
        for(int i=2;i<=n;i++)
        {
            if(flag[i]==true)
            {
                t++;
                if(t==5)
                {
                    if(i<10)
                        cout << "         " << i << endl;
                    else if(i<100)
                        cout << "        " << i << endl;
                    else if(i<1000)
                        cout << "       " << i << endl;
                    t=0;
                }
                else
                {
                    if(i<10)
                        cout << "         " << i;
                    else if(i<100)
                        cout << "        " << i;
                    else if(i<1000)
                        cout << "       "  << i;
                }
            }
        }
        cout << endl;
    }
}