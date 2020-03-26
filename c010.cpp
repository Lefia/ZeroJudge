#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    while(cin >> n)
    {
        if(vec.empty())
            vec.push_back(n);
        else
        {
            vec.insert(lower_bound(vec.begin(),vec.end(),n),n);
        }
        if(vec.size()%2==0)
            cout << (vec[vec.size()/2-1]+vec[vec.size()/2])/2 << endl;
        else
            cout << vec[vec.size()/2] << endl;
    }
}