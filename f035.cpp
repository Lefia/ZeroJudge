#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    bool flag=false;
    while((ch=getchar())!=EOF)
    {
        if(!flag)
        {
            cout << (int)ch;
            flag=true;
        }
        else if(ch=='\n')
            break;
        else
            cout << "_" << (int)ch;
    }
    cout << endl;
}