#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, char> trans;
    trans['1']='`';trans['2']='1';trans['3']='2';trans['4']='3';trans['5']='4';
    trans['6']='5';trans['7']='6';trans['8']='7';trans['9']='8';trans['0']='9';
    trans['-']='0';trans['=']='-';trans['W']='Q';trans['E']='W';trans['R']='E';
    trans['T']='R';trans['Y']='T';trans['U']='Y';trans['I']='U';trans['O']='I';
    trans['P']='O';trans['[']='P';trans[']']='[';trans['\\']=']';trans['S']='A';
    trans['D']='S';trans['F']='D';trans['G']='F';trans['H']='G';trans['J']='H';
    trans['K']='J';trans['L']='K';trans[';']='L';trans['\'']=';';trans['X']='Z';
    trans['C']='X';trans['V']='C';trans['B']='V';trans['N']='B';trans['M']='N';
    trans[',']='M';trans['.']=',';trans['/']='.';trans[' ']=' ';trans['\n']='\n';
    char ch;
    while((ch=getchar())!=EOF)
    {
        putchar(trans[ch]);
    }
}