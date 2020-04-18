#include <bits/stdc++.h>
using namespace std;
int a, b;
bool graph[801][801];
bool visit[801];

void bfs()
{
    queue<int> q;
    memset(visit, 0, sizeof(visit));
    if (!visit[a])
    {
        q.push(a);
        visit[a]=1;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            for (int j=1;j<801;j++)
            {
                if (graph[k][j] && !visit[j])
                {
                    q.push(j);
                    visit[j]=true;
                }
            }
        }
    }
}
int main()
{
    int n, m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(graph,0,sizeof(graph));
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            graph[a][b]=1;
        }
        scanf("%d%d",&a,&b);
        bfs();
        if(visit[a] && visit[b])
            printf("Yes!!!\n");
        else
            printf("No!!!\n");

    }
}
