#include <iostream>

using namespace std;

int main()
{
    int n, m, s1, s2;
    while (cin >> n >> m)
    {
        s1 = 5*n+1;      //第一行有 6+(n-1)*5 = 5*n+1 片屋瓦
        s2 = 3*m*n+2*n+m;  //總共有5*n+1 + (3*n+1)(m-1) = 5*n+1+3*m*n-3*n+m-1 = 3*m*n+2*n+m
        cout << s2 <<endl;
    }
    return 0;
}