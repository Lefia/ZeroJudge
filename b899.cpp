#include<iostream>
using namespace std;
class Position
{
    public:
        int x;
        int y;
};
int main()
{
    Position pos[3];
    for(int i=0;i<3;i++)
        cin >> pos[i].x >> pos[i].y;
    double Max=-1;
    int cur1;
    int cur2;
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            double l=(pos[i].x-pos[j].x)*(pos[i].x-pos[j].x)+(pos[i].y-pos[j].y)*(pos[i].y-pos[j].y);
            if(l>Max)
            {
                Max = l;
                cur1 = i;
                cur2 = j;
            }
        }
    }
    cout << pos[cur1].x + pos[cur2].x - pos[3-cur1-cur2].x << " " << pos[cur1].y + pos[cur2].y - pos[3-cur1-cur2].y << endl;
}
