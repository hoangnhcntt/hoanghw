#include <bits/stdc++.h>
using namespace std;
int n,m,p;
int tich(int x)
{
    int tich1=1;
    while(x>0)
    {
        tich1*=x%10;
        x/=10;
    }
    return tich1;
}
int main()
{
    freopen("calc.inp","r",stdin);
    freopen("calc.out","w",stdout);
    cin>>n>>m>>p;
    int tichn=tich(n);
    int tichm=tich(m);
    int tichp=tich(p);
    int rmax=max(tichn,max(tichm,tichp));
    cout<<rmax;
    return 0;
}
