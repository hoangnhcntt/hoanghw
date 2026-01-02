#include <bits/stdc++.h>
using namespace std;
long long n,a[100000],tong=0;
int rmax=-1e9;
int tcs(int x)
{
    int sl=0;
    long long tich=1;
    while(x>0)
    {
        tich*=x%10;
        x/=10;
        sl++;
    }
    long long k=tich*sl;
    return k;
}
bool kt(int x)
{
    if(tcs(x)==0)
        return false;
    if(tcs(x)!=0)
        return true;
}
int main()
{
    freopen("AAXA.INP","r",stdin);
    freopen("AAXA.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(kt(a[i])==true)
        {
            rmax=max(rmax,tcs(a[i]));
            tong+=tcs(a[i]);
        }
    if(tong!=0)
        cout<<tong<<endl<<rmax;
    else
        cout<<"NONE";
    return 0;
}
