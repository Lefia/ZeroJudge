#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if(((x1-x2)*(y1-y3))==((y1-y2)*(x1-x3)) && ((x1<=x3 && x3<=x2 && y1<=y3 && y3<=y2) || (x1>=x3 && x3>=x2 && y1>=y3 && y3>=y2) || (x1<=x3 && x3<=x2 && y1>=y3 && y3>=y2) || (x1>=x3 && x3>=x2 && y1<=y3 && y3<=y2) ))
            cout << "該死的東西!竟敢想讓我死！" << endl;
        else
            cout << "父親大人!母親大人!我快到了！" << endl;

    }
}
