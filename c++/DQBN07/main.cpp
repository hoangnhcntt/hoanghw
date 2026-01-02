#include <bits/stdc++.h>
using namespace std;
int n,b[100000],a[100000],tong=0;
bool kt(int x)
{
    int tong0=0,tong1=0;
    for(int i=1; i<=n; i++)
    {
        if(b[i]==0)
            tong0+=a[i];
        else tong1+=a[i];
    }
    if(tong0==tong1)
        return true;
    else return false;
}
void in()
{
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            cout<<i<<" ";
    cout<<endl;
    for(int i=1; i<=n; i++)
        if(b[i]==0)
            cout<<i<<" ";
    cout<<endl;
}
void xl()
{
    if (kt(n))
    {
        int c1 = count(b + 1, b + n + 1, 1);
        int c0 = n - c1;
        if (c1 > 0 && c0 > 0)
        {
            if (b[1] == 1)
                in();
        }
    }
}
void pps(int x)
{

    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n) xl();
        else
            pps(x+1);
    }
}
int main()
{
    freopen("DQBN07.INP","r",stdin);
    freopen("DQBN07.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        tong+=a[i];
    }
    if(tong%2==0)
        pps(1);
    else cout<<-1;
    return 0;
}
