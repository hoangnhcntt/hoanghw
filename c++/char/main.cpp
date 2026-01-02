#include <bits/stdc++.h>
using namespace std;
string s;
int sl;
int main()
{
    getline(cin,s);
    for(char x:s)
    {
        if(isupper(x)==true)
            sl++;
    }
    if(sl!=0)
        cout <<sl;
    else
        cout<<-1;
    return 0;
}
