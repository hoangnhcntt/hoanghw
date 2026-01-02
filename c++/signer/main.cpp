#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax;
bool kt(int u,int v)
{
    sort(a+u,a+u+v);
    for(int i=u; i<=v; i++)
        if(a[i]==a[i+1])
            return false;
    return true;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(kt(i,j)==true)
                rmax=max(rmax,j-i+1);
    cout<<rmax;
    return 0;
}
