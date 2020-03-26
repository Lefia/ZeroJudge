#include<cstdio>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int cnt[101]={0};
        for(int i=0;i<n;i++)
        {
            int m;
            scanf("%d",&m);
            cnt[m]++;
        }
        for(int i=1;i<=100;i++)
        {
            for(int j=0;j<cnt[i];j++)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}