#include <iostream>

using namespace std;

int main()
{
    int AND[2][2]={0,0,0,1}, OR[2][2]={0,1,1,1}, XOR[2][2]={0,1,1,0};
    int a, b, c;
    bool flag=0;
    while(cin >> a >> b >> c)
    {
        a=(a>=1?1:0);
        b=(b>=1?1:0);
        if(AND[b][a]==c)
        {
            cout << "AND" << endl;
            flag=1;
        }
        if(OR[b][a]==c)
        {
            cout << "OR" << endl;
            flag=1;
        }
        if(XOR[b][a]==c)
        {
            cout << "XOR" << endl;
            flag=1;
        }
        if(flag==0)
            cout << "IMPOSSIBLE" << endl;
    }
}