#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    freopen("frac.inp","r",stdin);
    freopen("frac.out","w",stdout);
    cin>>a>>b;
    if(b==0)
    {
        cout<<"INVALID";
    }
    else
    {
        int gcd=__gcd(a,b);
        if(b<0)
            cout<<-a/gcd<<" "<<-b/gcd;
        else
        {
            if(b==1)
                cout<<a/gcd;
            else
                cout<<a/gcd<<" "<<b/gcd;
        }
    }
    return 0;
}
