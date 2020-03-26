#include <iostream>
using namespace std;

int main()
{
    char str[100];
    while(cin.getline(str,100))
    {
        cout << str << " " << str << endl;
    }
    return 0;
}