#include <bits/stdc++.h>
using namespace std;
string s;
int na=0,pa=0;
int main()
{
    cin>>s;
    for(char x:s)
    {
        if(x=='u' || x=='U')
            na++;
        else if(x=='e' || x=='E')
            na++;
        else if(x=='a' || x=='A')
            na++;
        else if(x=='o' || x=='O')
            na++;
        else if(x=='i' || x=='I')
            na++;
        else
            pa++;
    }
    cout<<na<<" "<<pa;
    return 0;
}
