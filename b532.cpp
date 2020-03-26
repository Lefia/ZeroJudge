#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        while(t--)
        {
            string line;
            stringstream ss;
            while(getline(cin,line))
            {
                string a="", b="";
                char op;
                bool flag=false;
                for(int i=0;i<line.size();i++)
                {
                    if(line[i]=='+'||line[i]=='-'||line[i]=='*'||line[i]=='/'||line[i]=='%')
                    {
                        op=line[i];
                        flag=true;
                    }
                    else if(!flag)
                    {
                        if(line[i]>='0'&&line[i]<='9')
                            a+=line[i];
                    }
                    else
                    {
                        if(line[i]>='0'&&line[i]<='9')
                        b+=line[i];
                    }
                }
                long long int A, B;
                ss << a;
                ss >> A;
                ss.str("");
                ss.clear();
                ss << b;
                ss >> B;
                ss.str("");
                ss.clear();
                switch(op)
                {
                    case '+':
                        cout << A+B << endl;
                        break;
                    case '-':
                        cout << A-B << endl;
                        break;
                    case '*':
                        cout << A*B << endl;
                        break;
                    case '/':
                        cout << A/B << endl;
                        break;
                    case '%':
                        cout << A%B << endl;
                        break;
                }
            }
        }
    }
}