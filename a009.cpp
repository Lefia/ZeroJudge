#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            cout << char(s.at(i)-7);
        }
        cout << endl;
    }
}