#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n)
    {
        cout << n << " =";
        int num[7]={0};
        while(n-1000>=0)
        {
            n-=1000;
            num[0]++;
        }
        while(n-500>=0)
        {
            n-=500;
            num[1]++;
        }
        while(n-100>=0)
        {
            n-=100;
            num[2]++;
        }
        while(n-50>=0)
        {
            n-=50;
            num[3]++;
        }
        while(n-10>=0)
        {
            n-=10;
            num[4]++;
        }
        while(n-5>=0)
        {
            n-=5;
            num[5]++;
        }
        while(n-1>=0)
        {
            n-=1;
            num[6]++;
        }
        bool flag=false;
        for(int i=0;i<7;i++)
        {
            if(num[i]!=0)
            {
                if(flag)
                    cout << " +";
                if(i==0)
                    cout << " 1000*" << num[0];
                else if(i==1)
                    cout << " 500*" << num[1];
                else if(i==2)
                    cout << " 100*" << num[2];
                else if(i==3)
                    cout << " 50*" << num[3];
                else if(i==4)
                    cout << " 10*" << num[4];
                else if(i==5)
                    cout << " 5*" << num[5];
                else if(i==6)
                    cout << " 1*" << num[6];
                flag=true;
            }
        }
        cout << endl;
    }
}