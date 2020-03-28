#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d\n",&n);
	while(n--)
    {
        char ch;
        int p=0;
        int q=0;
        int Pair=0;
        while(true)
        {
            ch=getchar();
            if(ch=='.')
                continue;
            else if(ch=='p')
                p++;
            else if(ch=='q')
            {
                if(p>0)
                {
                    p--;
                    Pair++;
                }
            }
            else if(ch=='\n')
            {
                printf("%d\n",Pair);
                break;
            }
        }
    }
}
