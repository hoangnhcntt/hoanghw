#include <bits/stdc++.h>
using namespace std;
int n,a[10000],c[10000],res;
int b[10000],k;
void xuli()
{
    for(int i=1;i<=n;i++)
        if(b[i]==1)
          c[++k]=a[i];
    for(int i=1;i<=k-1;i++)
        if(c[i]>c[i+1])
        return;
    res=max(res,k);
}
void thu(int i)
{
    for(int j=0;j<=1;j++)
    {
        b[i]=j;
        if(i==n)
            xuli();
        else
            thu(i+1);
    }
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    res=-1e9;
    thu(1);
    cout<<res;
    return 0;
}
