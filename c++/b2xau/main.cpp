#include <bits/stdc++.h>
using namespace std;
string s;
int slso=0,slchu=0,kitu=0;
int main()
{
    cin>>s;
    for(char x:s)
    {
        if(isdigit(x))
            slso++;
        else if(isalpha(x))
            slchu++;
        else
            kitu++;
    }
    cout<<slchu<<" "<<slso<<" "<<kitu;
    return 0;
}
