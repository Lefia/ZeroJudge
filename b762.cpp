#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k=0, d=0, a=0;
    int tmp=0;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            string str;
            cin >> str;
            if(str=="Get_Kill")
            {
                tmp++;
                k++;
                if(tmp>=8)
                    cout << "LEGENDARY!" << endl;
                else if(tmp==7)
                    cout << "GUALIKE!" << endl;
                else if(tmp==6)
                    cout << "DOMINATING!" << endl;
                else if(tmp==5)
                    cout << "UNSTOPPABLE!" << endl;
                else if(tmp==4)
                    cout << "RAMPAGE~" << endl;
                else if(tmp==3)
                    cout << "KILLING SPREE!" << endl;
                else
                    cout << "You have slain an enemie." << endl;
            }
            else if(str=="Get_Assist")
            {
                a++;
            }
            else
            {
                d++;
                if(tmp>=3)
                    cout << "SHUTDOWN." << endl;
                else
                    cout << "You have been slained." << endl;
                tmp=0;
            }
        }
        cout << k << "/" << d << "/" << a << endl;
    }

}