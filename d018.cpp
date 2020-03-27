#include <bits/stdc++.h>
using namespace std;
void getNum(string str, double &odd_sum, double &even_sum);
int StringToInt(string str);
int main()
{
	string line;
	while(getline(cin,line))
    {
        stringstream ss;
        ss << line;
        string str;
        double n, odd=0, even=0;
        bool flag=1;
        while(ss >> str)
        {
            getNum(str,odd,even);
        }
        cout << odd-even << endl;
    }
}
void getNum(string str,double &odd_sum, double &even_sum)
{
    stringstream tmp;
    double res;
    int o;
    o=StringToInt(str.substr(0,str.find_first_of(":",0)));
    str=str.substr(str.find_first_of(":",0)+1,str.size()-str.find_first_of(":",0));
    tmp << str;
    tmp >> res;
    if(o%2==0)
        even_sum+=res;
    else
        odd_sum+=res;
}
int StringToInt(string str)
{
    int sum=0;
    int k=1;
    for(int i=str.size()-1;i>=0;i--)
    {
        sum+=(str[i]-'0')*k;
        k*=10;
    }
    return sum;
}
