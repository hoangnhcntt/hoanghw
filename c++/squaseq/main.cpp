#include <bits/stdc++.h>
using namespace std;
int n,a[100000],k;
bool cp(int x)
{
    if(trunc(sqrt(x))==sqrt(x))
        return true;
    return false;
}
int main()
{
    freopen("SQUASEQ.INP","r",stdin);
    freopen("SQUASEQ.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    while(k>0)
    {
        int u,v;
        int sl=0;
        cin>>u>>v;
        for(int i=u; i<=v; i++)
            if(cp(a[i])==true)
                sl++;
        cout<<sl<<endl;
        sl=0;
        k--;
    }
    return 0;
}
