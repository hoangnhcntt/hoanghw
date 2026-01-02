#include <bits/stdc++.h>
using namespace std;
int res;
set<int> c;
int b[10000];
int t[10000];
int n,s,a[10000];
void xuli(int u)
{
    for(int i=1; i<=u; i++)
        if(c.find(b[i])==c.end())
            return;
    res=min(res,u);
}
void thu(int i)
{
    for(int j=b[i-1]; 2*j<=s-t[i-1]; j++)
    {
        b[i]=j;
        t[i]=t[i-1]+j;
        thu(i+1);
    }
    b[i]=s-t[i-1];
    xuli(i);
}
int main()
{

    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>s;
    for(int i=1; i<=n; i++)
        c.insert(a[i]);
    res=1e9;
    b[0]=1;
    t[0]=0;
    thu(1);
    if(res==1e9)
        cout<<-1;
    else
        cout<<res;
    return 0;
}
