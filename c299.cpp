#include <iostream>

using namespace std;

int main()
{
    int n,list1[100];
    while (cin >> n)
    {
        int ma , mi;
        for (int i=0;i<n;i++)
        {
            cin >> list1[i];
            if (i == 0)
            {
                mi = list1[0];
                ma = list1[0];
            }
            if (list1[i] >= ma)
            {
                ma = list1[i];
            }
            if (list1[i] <= mi)
            {
                mi = list1[i];
            }

        }
        if (ma-mi+1 == n)
        {
            cout << mi << " " << ma << " yes" << endl;
        }
        else
        {
            cout << mi << " " << ma << " no" << endl;
        }

    }
}