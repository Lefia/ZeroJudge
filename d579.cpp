#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main () 
{
	double n ;
	while (cin >> n) 
    {
			cout << "|" << fixed << setprecision(4) << n << "|=" << fixed << setprecision(4) << abs(n) << endl ; 
	}
}