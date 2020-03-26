#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    while(getline(cin,num))
    {
        int sum=0;
        for(int i=0;i<num.size();i++)
        {
            if(num[i]==48||num[i]==54||num[i]==57)
                sum+=1;
            else if(num[i]==56)
                sum+=2;
        }
            cout << sum << endl;
    }

}