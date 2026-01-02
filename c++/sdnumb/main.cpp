#include <bits/stdc++.h>
using namespace std;
string n;
int main()
{
    freopen("sdnumb.inp","r",stdin);
    freopen("sdnumb.out","w",stdout);
    cin>>n;
    int tong=0;
    int tich=1;
    int sl=0;
    int rmax=-1e9,rmin=1e9;
    while(n>0)
    {
        tong+=n%10;
        tich*=n%10;
        sl++;
        rmax=max(rmax,n%10);
        rmin=min(rmin,n%10);
        n/=10;
    }
    cout <<tong<<" "<<tich<<" "<<sl<<" "<<rmax<<" "<<rmin;
    return 0;
}
