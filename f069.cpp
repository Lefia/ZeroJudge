#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, w;
    while (cin >> n >> w)
    {
        map<string, int> mp;
        string s;
        int k;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> k;
            mp[s] = k;
        }
        int m;
        cin >> m;
        long long int sum = 0;
        int a;
        for (int i = 0; i < m; i++)
        {
            cin >> s >> a;
            sum += mp[s] * a;
        }
        if (sum >= w * 4)
            cout << "Euan eats too much." << endl;
        else
            cout << "Euan you are doing a great job!" << endl;
    }
}
