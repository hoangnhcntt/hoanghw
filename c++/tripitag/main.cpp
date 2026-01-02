#include <bits/stdc++.h>
using namespace std;
int n,a[1000000],sl;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    int p=0;
    for(int u=1; i<=n-2; i++)
        for(int v=u+1; v<=n-1; v++)
            for(int z=v+1; z<=n; z++)
                if(a[u]*a[u]+a[v]*a[v]==a[z]*a[z])
                {
                    sl++;
                    p=1;
                }
    if(p!=0)
        cout<<sl;
    else
        cout<<"NONE";
    return 0;
}
