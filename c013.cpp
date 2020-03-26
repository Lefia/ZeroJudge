#include <iostream>

using namespace std ;

int main(){
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int a, f;
            cin >> f >> a;
            for(int j=0;j<a;j++)
            {
                for(int k=1;k<=f;k++)
                {
                    for(int l=0;l<k;l++)
                    {
                        cout << k;
                    }
                    cout << endl;
                }
                for(int k=f-1;k>0;k--)
                {
                    for(int l=0;l<k;l++)
                    {
                        cout << k;
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    }
}