#include <bits/stdc++.h>

using namespace std;
char graph[100][100];
int n;
void bfs(int x, int y)
{
    if(x>=n||y>=n||x<0||y<0||graph[x][y]=='+')
        return;
    graph[x][y]='+';
    bfs(x+1,y);
    bfs(x-1,y);
    bfs(x,y+1);
    bfs(x,y-1);
}
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> graph[i][j];
        }
    }
    int X, Y;
    cin >> X >> Y;
    bfs(X,Y);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << graph[i][j];
        }
        cout << endl;
    }

}
