#include <iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
        {
		double var,sum=0;
		for(int i=0;i<n;i++)
        {
			cin >> var;
			sum+=var;
		}
		if(sum/n>59)
		{
		    cout <<"no" <<endl;
        }
		else
        {
            cout << "yes" <<endl;
        }
    }
}