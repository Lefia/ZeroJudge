#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char ch;
    while(cin >> n)
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ch=getchar();
                if(i==j)
                    putchar(ch);
            }
        }
    }
}