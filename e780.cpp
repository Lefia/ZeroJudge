#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int x=0;
        int cnt=0;
        while(n--)
        {
            string str;
            cin >> str;
            if(str=="L")
                x--;
            else if(str=="R")
                x++;
            else
            {
                int p;
                cin >> p;
                if(p==x)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}