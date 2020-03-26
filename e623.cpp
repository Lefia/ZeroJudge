#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vec;
    int j=1;
    while(vec.size()<10000)
    {
        for(int i=0;i<j;++i)
            vec.push_back("Pen");
        for(int i=0;i<j;++i)
            vec.push_back("Pineapple");
        for(int i=0;i<j;++i)
            vec.push_back("Apple");
        for(int i=0;i<j;++i)
            vec.push_back("Pineapple pen");
        j++;
    }
    int n;
    while(cin >> n)
    {
        cout << vec[n-1] << endl;
    }
}