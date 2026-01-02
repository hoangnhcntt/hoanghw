#include <bits/stdc++.h>
using namespace std;
int a[10000],k,n;
int b[10000],s;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
void xl()
{
    int p=0;
    for(int i=1; i<=k; i++)
        p+=b[a[i]];
    if(nt(p))
    {
        for(int i=1; i<=k; i++)
            cout<<b[a[i]]<<" ";
        cout<<endl;
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
    //freopen("DQCKN3.INP","r",stdin);
    //freopen("DQCKN3.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>b[i];
    a[0]=0;
    thu(1);
    return 0;
}
