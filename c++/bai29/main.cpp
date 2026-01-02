#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("BAI29.INP","r",stdin);
    freopen("BAI29.OUT","w",stdout);
    cin>>n;
    int rmax=-1e9;
    if((((n/1000)%10)%2!=0))
        rmax=max(rmax,(n/1000)%10);
    if((((n/100)%10)%2!=0))
        rmax=max(rmax,(n/100)%10);
    if((((n/10)%10)%2!=0))
        rmax=max(rmax,(n/10)%10);
    if((((n/1)%10)%2!=0))
        rmax=max(rmax,(n/1)%10);
    if(rmax==-1e9)
        cout<<"NONE";
    else cout<<rmax;
    return 0;
}
