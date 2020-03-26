#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n<0)
            break;
        stack<int> sk;
        do
        {
            sk.push(n%3);
            n/=3;
        }while(n!=0);
        while(!sk.empty())
        {
            cout << sk.top();
            sk.pop();
        }
        cout << endl;
    }
}