#include<bits/stdc++.h>
using namespace std;
int res=0;
bool win(string str1, string str2)
{
    if(str1=="Scissors")
    {
        if(str2=="Paper")
        {
            cout << "紫獲勝" << endl;
            res++;
        }
        else
        {
            cout << "靈夢獲勝" << endl;
            res--;
        }
    }
    else if(str1=="Paper")
    {
        if(str2=="Stone")
        {
            cout << "紫獲勝" << endl;
            res++;
        }
        else
        {
            cout << "靈夢獲勝" << endl;
            res--;
        }
    }
    else
    {
        if(str2=="Scissors")
        {
            cout << "紫獲勝" << endl;
            res++;
        }
        else
        {
            cout << "靈夢獲勝" << endl;
            res--;
        }
    }
}
int main()
{
    string l;
    while(cin >> l)
    {
        if(l=="Game")
        {
            if(res>0)
                cout << "螢火的蹤跡" << endl;
            else
                cout << "悲慘的籌措起香油錢" << endl;
            break;
        }
        string t;
        cin >> t;
        win(l,t);
    }

}