#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int t;
   while(cin >> t)
   {
      int Max=0;
      int n;
      int sum=0;
      for(int i=0;i<t;i++)
      {
         cin >> n;
         sum+=n;
         if(sum<0)
            sum=0;
         else
            Max=max(sum,Max);
      }
      cout << Max << endl;
   }
}
