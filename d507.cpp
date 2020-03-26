#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int l[3];
    while (cin >> l[0] >> l[1] >> l[2])
    {
        sort(l,l+3);
        if(pow(l[0],2)+pow(l[1],2)==pow(l[2],2))
            cout << "right triangle" << endl;
        else if(pow(l[0],2)+pow(l[1],2)<pow(l[2],2))
            cout << "obtuse triangle" << endl;
        else
            cout << "acute triangle" << endl;
    }
}