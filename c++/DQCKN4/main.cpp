#include <bits/stdc++.h>
using namespace std;
int a[10000],k,n;
int b[10000],s,res=0;
bool kt(int x)
{
    int j=x;
    int h=0;
    while(x>0)
    {
        h*=10;
        h+=x%10;
        x/=10;
    }
    if(h==j)
        return true;
    else return false;
}
void xl()
{
    int p=0;
    for(int i=1; i<=k; i++)
        p+=b[a[i]];
    if(kt(p))
    {
        res=max(res,p);
    }
}
void thu(int i)
{
    for(int j=a[i-1]+1; j<=n-k+i; j++)
    {
        a[i]=j;
        if(i==k)
            xl();
        else thu(i+1);
    }
}
int main()
{
    //freopen("DQCKN4.INP","r",stdin);
    //freopen("DQCKN4.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>b[i];
    a[0]=0;
    thu(1);
    cout<<res;
    return 0;
}
