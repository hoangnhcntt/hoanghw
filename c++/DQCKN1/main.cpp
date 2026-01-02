#include <bits/stdc++.h>
using namespace std;
int a[10000],k,n;
void xl()
{
    for(int i=1; i<=k; i++)
        cout<<a[i]<<" ";
    cout<<endl;
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
    freopen("DQCKN1.INP","r",stdin);
    freopen("DQCKN1.OUT","w",stdout);
    cin>>n>>k;
    a[0]=0;
    thu(1);
    return 0;
}
