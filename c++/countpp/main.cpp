#include <bits/stdc++.h>
using namespace std;
int n,a[1000],g[1000];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        g[i]=1;
    for(int i=1; i<=n; i++){
        if(a[i]==a[i-1])
            g[i]=g[i-1]+1;
            else
                g[i]=1;
    }
    for(int i=1; i<=n; i++)
        if(a[i]!=a[i+1])
        {
            cout<<a[i]<<" "<<g[i]<<endl;
        }
    return 0;
}
