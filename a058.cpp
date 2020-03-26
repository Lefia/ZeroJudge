#include<iostream>

using namespace std;

int main()
{
    int n,Count[3]={0},num;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            cin >> num;
            if(num%3==0)
                Count[0]++;
            else if(num%3==1)
                Count[1]++;
            else
                Count[2]++;
        }
         for(int j=0;j<3;j++)
        {
                cout << Count[j] << " ";
        }
            cout << endl;
    }
}