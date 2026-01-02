#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int tongl(int x)
{
    int s=0;
    while(x>0)
    {
        int p=x%10;
        if(p%2==1)
            s+=p;
        x/=10;
    }
    return s;
}
int tongc(int x)
{
    int s=0;
    while(x>0)
    {
        int p=x%10;
        if(p%2==0)
            s+=p;
        x/=10;
    }
    return s;
}
int snt(int u)
{
    int p=u-1;
    while(nt(p)==false && p>2)
    {
        p--;
        if(p==2) return -1;
    }
    return p;
}
int timu(int u)
{
    int res=1;
    for(int i=1; i<=sqrt(u); i++)
        if(u%i==0)
        {
            if(i%2==1)
                res=max(res,i);
            if((u/i)%2==1)
                res=max(res,u/i);
        }
    return res;
}
void he(int x)
{
    int tongle=0,tongchan=0,sont=0,uocle=0;
    tongle=tongl(x);
    tongchan=tongc(x);
    sont=snt(x);
    uocle=timu(x);
    cout<<tongle<<" "<<tongchan<<" "<<sont<<" "<<uocle;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        he(a[i]);
        cout<<endl;
    }
    return 0;
}
