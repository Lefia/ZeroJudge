#include <iostream>

using namespace std;

int main()
{
   int m[10], n, s=0;
   for (int i=0;i<10;i++)
   {
       cin >> m[i];
   }
   cin >> n;
   for (int i=0;i<10;i++)
   {
       if (n+30>=m[i])
       {
           s+=1;
       }
   }
   cout << s;
   s=0;

}