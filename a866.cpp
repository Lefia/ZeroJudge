#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    while(cin >> n)
    {
        if(n==0)
        {
            double s1=0,s2=0;
            for(int i=5;i>=1;i--)
            {
                int s;
                s=count(vec.begin(),vec.end(),i);
                if(s<10)
                    cout << i << " ( " << s << ") |" << string(s,'=') << endl;
                else
                    cout << i << " (" << s << ") |" << string(s,'=') << endl;
                s1+=s*i;
                s2+=s;
            }
            cout << fixed << setprecision(4) << "Average rating: " << s1/s2 << endl;

        }
        vec.push_back(n);
    }
}