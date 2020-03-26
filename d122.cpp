#include <iostream>

using namespace std;

int main()
{
   long int n;
   int s=0;
   while (cin >> n)
   {
       while (n!=0)
       {
           n = n/5;
           s+=n;
       }
       cout << s << endl;
       s=0;
   }
    return 0;
}