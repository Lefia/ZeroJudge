#include<bits/stdc++.h>
using namespace std;

bool binarysearch(int data[], int search, int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n)
    {
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int b1[n];
        int b2[n];
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                b1[i] = a[i];
                b2[i] = a[n-i-1];
            }
            else
            {
                b1[i] = a[i] + b1[i-1];
                b2[i] = a[n-i-1] + b2[i-1];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(binarysearch(b2,b1[i],n))
                cnt++;
        }
        cout << cnt << endl;
    }
}
bool binarysearch(int data[], int key, int p)
{
    int low = 0, high = p - 1;

    while (low <= high)
    {
        int mid = (low + high)/2;

        if(data[mid] == key)
        {
            return 1;
        }
        else if(data[mid] > key)
        {
            high = mid-1;
        }
        else if(data[mid] < key)
        {
            low = mid+1;
        }
    }
    return 0;
}