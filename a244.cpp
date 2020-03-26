#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int a;
        long int b,c;
        for(int i=0;i<n;i++)
        {
            cin >> a >> b >> c; 
            switch(a)
            {
                case 1:
                    cout << b+c << endl;
                    break;
                case 2:
                    cout << b-c << endl;
                    break;
                case 3:
                    cout << b*c << endl;
                    break;
                case 4:
                    cout << b/c << endl;
                    break;
            }
        }
        
    }
}