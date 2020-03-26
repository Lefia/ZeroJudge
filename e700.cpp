#include <iostream>

using namespace std;

int main()
{
    int m, d;
    char ch;
    while(cin >> m >> ch >> d)
    {
        if((m==1 && d>=21) || (m==2 && d<=19))
            cout<<"水瓶座"<< endl;
        else if((m==2 && d>=20) || (m==3 && d<=20))
            cout<<"雙魚座"<< endl;
        else if((m==3 && d>=21) || (m==4 && d<=20))
            cout<<"牡羊座"<< endl;
        else if((m==4 && d>=21) || (m==5 && d<=21))
            cout<<"金牛座"<< endl;
        else if((m==5 && d>=22) || (m==6 && d<=21))
            cout<<"雙子座"<< endl;
        else if((m==6 && d>=22) || (m==7 && d<=22))
            cout<<"巨蟹座"<< endl;
        else if((m==7 && d>=23) || (m==8 && d<=21))
            cout<<"獅子座"<< endl;
        else if((m== 8 && d>=22) || (m==9 && d<=23))
            cout<<"處女座"<< endl;
        else if((m==9 && d>=23) || (m==10 && d<=23))
            cout<<"天秤座"<< endl;
        else if((m==10 && d>=24) || (m==11 && d<=22))
            cout<<"天蠍座"<< endl;
        else if((m==11 && d>=23) || (m==12 && d<=22))
            cout<<"射手座"<< endl;
        else
            cout<<"摩羯座"<< endl;
    }
}