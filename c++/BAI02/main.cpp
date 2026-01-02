#include <bits/stdc++.h>
using namespace std;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
         return false;
    return true;
}
int main()
{
    freopen("BAI02.INP","r",stdin);
    freopen("BAI02.OUT","w",stdout);
    int n,a[100000];
    int tong=1e9,sl=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(abs(a[i]-a[i+1])==2)
            tong=min(a[i]+1,tong);
        if(nt(a[i]))
            sl++;
    }
    cout<<sl<<endl;
    if(tong==1e9)
        cout<<a[n]+1;
    else
        cout<<tong;
    return 0;
}
