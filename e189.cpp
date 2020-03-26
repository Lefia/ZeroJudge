#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    while(cin >> num)
    {
        int sum=0;
        for(int i=0;i<num.size();i++)
            sum+=num[i];
        if(sum%3==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}