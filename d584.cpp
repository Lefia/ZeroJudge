#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,lv;
    while(cin >> n >> lv)
    {
        if(n==0)
        {
            cout << 0 << endl;
        }
        else if(n==2)
        {
            if(lv>=120)
                cout << (lv-8)*3+6 << endl;
            else if(lv>=70)
                cout << (lv-8)*3+3 << endl;
            else if(lv>=30)
                cout << (lv-8)*3+2 << endl;
            else if(lv>=8)
                cout << (lv-8)*3+1 << endl;
        }
        else
        {
            if(lv>=120)
                cout << (lv-10)*3+6 << endl;
            else if(lv>=70)
                cout << (lv-10)*3+3 << endl;
            else if(lv>=30)
                cout << (lv-10)*3+2 << endl;
            else if(lv>=10)
                cout << (lv-10)*3+1 << endl;
        }
    }
}