#include <bits/stdc++.h>

using namespace std;
void check(long long int n, long long int m);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, m;
    while(cin >> n >> m)
    {
        check(n,m);
    }
}
void check(long long int n, long long int m)
{
        if(m==0)
            cout << "Go Kevin!!" << endl;
        else if((n-1)%m==0)
            cout << "Go Kevin!!" << endl;
        else
            cout << "No Stop!!" << endl;

}