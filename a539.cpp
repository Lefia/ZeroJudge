#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int num[n];
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin >> num[i];
            for(int j=0;j<i;j++)
                if(num[j] > num[i])
                    s++;
        }
        cout << "Minimum exchange operations : " << s << endl;

    }
}