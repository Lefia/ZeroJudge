#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    while(cin >> n >> q) {
        vector<int> vec;
        for(int i=0;i<n;i++) {
            int tmp;
            cin >> tmp;
            vec.push_back(tmp);
        }
        sort(vec.begin(),vec.end());
        int a;
        for(int i=0;i<q;i++) {
            cin >> a;
            int M=upper_bound(vec.begin(),vec.end(),a)-vec.begin();
            cout << M%2 << endl;

        }
    }
}