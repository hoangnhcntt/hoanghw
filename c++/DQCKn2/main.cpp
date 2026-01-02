#include <bits/stdc++.h>
using namespace std;
int a[10000],k,n;
int b[10000],s;
void xl()
{
    int p=0;
    for(int i=1; i<=k; i++)
        p+=b[a[i]];
    if(p==s)
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
    //freopen("DQCKN2.INP","r",stdin);
    //freopen("DQCKN2.OUT","w",stdout);
    cin>>n>>k>>s;
    for(int i=1; i<=n; i++)
        cin>>b[i];
    a[0]=0;
    thu(1);
    return 0;
}
