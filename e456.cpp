#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string line;
    stringstream ss;
    string str;
    while(getline(cin,line))
    {
        ss << line;
        while(true)
        {
            ss >> str;
            if(ss.rdbuf()->in_avail()==0)
            {
                cout << str << " little Indians" << endl;
                break;
            }
            else
                cout << str << " little, ";
        }
    }
}