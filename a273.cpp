#include <iostream>
using namespace std;
int main()
{
    int n, k;
    while(cin >> n >> k)
    {
        if(k>0 && n!=k)
        {
            if(n%k==0)
            {
                cout << "Ok!" << endl;
            }
            else if(n%k!=0)
            {
                cout << "Impossib1e!" << endl;
            }
        }
        else if(n==k)
        {
            cout <<"Ok!" << endl;
        }
        else if(n>0 && k==0)
        {
            cout << "Impossib1e!" << endl;
        }
    }
    return 0;
}