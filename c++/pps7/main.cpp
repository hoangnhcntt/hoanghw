#include <bits/stdc++.h>
using namespace std;
int n,b[10000],k,a[10000],h=0,c[1000],d[100000],z=0,tong,rmax1,rmax2;
void xuli()
{
    int s1=0,s2=0;
    for(int i=1; i<=n; i++)
    {
        if(b[i]==1)
            s1+=a[i];
        else
            s2+=a[i];
    }
    if(s1==s2)
    {
        for(int i=1; i<=n; i++)
        {
            if(b[i]==1)
            {
                h++;
                rmax1=max(rmax1,h);
            }
            else
            {
                z++;
                rmax2=max(rmax2,z);
            }
        }
    }
}
void pps(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n) xuli();
        else
            pps(x+1);
    }
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        tong+=a[i];
    }
    if(tong%2==0)
    {
        pps(1);
        cout<<rmax1<<" "<<rmax2;
    }
    else
        cout<<-1;
    cout<<endl;
    return 0;
}
