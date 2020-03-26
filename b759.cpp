#include <iostream>

using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        for(int i=0;i<s.length();i++)
        {
            int t=s.length(),c=i;
            while(t>0)
            {
                cout << s[c];
                c++;
                if(c>s.length()-1)
                    c=0;
                t--;
            }
            cout << endl;
        }
    }
}