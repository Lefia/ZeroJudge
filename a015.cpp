#include <iostream>
using namespace std;
int main()
{
    short a, b;
    while(cin >> a >> b)
    {
        int n[b][a];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin >> n[j][i];
            }
        }
        for(int j=0;j<b;j++)
        {
            for(int i=0;i<a;i++)
            {
                cout << n[j][i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}