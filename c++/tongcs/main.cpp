#include <bits/stdc++.h>
using namespace std;
string x;
int main()
{
    getline(cin,x);
    int tong=0;
    int he=0;
    for(char s:x)
    {
        if(isdigit(s)==true)
        {
            he*=10;
            he+=int(s-48);
        }
        else
        {
            tong+=he;
            he=0;
        }
    }
    if(tong!=0)
    cout <<tong;
    else
        cout<<-1;
    return 0;
}
