#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("YEARDOUB.INP","r",stdin);
    freopen("YEARDOUB.OUT","w",stdout);
    cin>>n;
    if(n%400==0)
        cout<<"YES";
    else
    {
        if(n%4==0 && n%100!=0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
