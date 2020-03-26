#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    while(cin >> a >> b >> c >> d){
        if(a>37*c)
            a-=37*c;
        else
            a=0;
        if(a>64-8*(b%8))
            a-=64-8*(b%8);
        else
            a=0;
       cout << (a+63)/64+(b+7)/8+c+d << endl;;
    }
    return 0;
}