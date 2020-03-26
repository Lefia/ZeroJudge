#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n ;
    while (cin >> a >> b >> c)
    {
        if (a/10>=c/2)
        {
            n = c/2;
            cout << a << " 個餅乾，" << b+(c/2) << " 盒巧克力，" << c << " 個蛋糕。" << endl;
        }
        else if (a/10<c/2)
        {
            cout << a << " 個餅乾，" << b+(a/10) << " 盒巧克力，" << c << " 個蛋糕。" << endl;
        }
    }
    return 0;
}