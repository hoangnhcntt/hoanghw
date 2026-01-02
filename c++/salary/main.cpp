#include <bits/stdc++.h>
using namespace std;
int n,tong,rmax;
pair<string,int> a[100000];
int main()
{
    freopen("salary.inp","r",stdin);
    freopen("salary.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i].first>>a[i].second;
    for(int i=1; i<=n; i++)
    {
        tong+=a[i].second;
        rmax=max(rmax,a[i].second);
    }
    cout<<tong<<endl;
    for(int i=1; i<=n; i++)
        if(rmax==a[i].second)
            cout<<a[i].first<<" ";
    return 0;
}
