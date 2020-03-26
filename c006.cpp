#include <iostream>
using namespace std ;

int main()
{
    int d[4];
    while(cin >> d[0] >> d[1] >> d[2] >> d[3])
    {
        if(d[0]==0&&d[1]==0&&d[2]==0&&d[3]==0)
        {
            break;
        }
        int sum=1080;
        if(d[0]>d[1])
        {
            sum+=9*(d[0]-d[1]);
        }
        else
        {
            sum+=9*(d[0]+40-d[1]);
        }
        if(d[1]>d[2])
        {
            sum+=9*(40-d[1]+d[2]);
        }
        else
        {
            sum+=9*(d[2]-d[1]);
        }
        if(d[2]>d[3])
        {
            sum+=9*(d[2]-d[3]);
        }
        else
        {
            sum+=9*(d[2]+40-d[3]);
        }
        cout << sum << endl;

    }
}