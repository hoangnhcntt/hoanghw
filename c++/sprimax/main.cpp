#include <bits/stdc++.h>
using namespace std;
int n,b[100],a[10000];
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2;i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
void in()
{
    for(int i=1; i<=n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
}
void xuli()
{
    int s=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            s=a[i]*10+a[i+1];
            if(nt(s)==true)
                in();
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
    int z=n;
    a[4]=n%10;
    n/=10;
    a[3]=n%10;
    n/=10;
    a[2]=n%10;
    n/=10;
    a[1]=n;
    pps(1);
    return 0;
}
