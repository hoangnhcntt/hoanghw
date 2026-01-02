#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    freopen("BAI22.INP","r",stdin);
    freopen("BAI22.OUT","w",stdout);
    cin>>a>>b;
    if(a==0 && b==0)
        cout<<"MULTIPLE";
    else
    {
        if(a==0 && b!=0)
            cout<<"NONE";
        else
        {
            double k;
            k=-1.0*b/a;
            cout<<fixed<<setprecision(3)<<k;
        }
    }
    return 0;
}
