#include <bits/stdc++.h>
using namespace std;
long long n,tong,a[100000],kt=0;
int main()
{
    //freopen("plucky2.inp","r",stdin);
    //freopen("plucky2.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        tong+=a[i];
    int tong1=0;
    for(int i=1;i<=n;i++)
    {
        tong1+=a[i];
        if(tong1/2==tong-tong1)
        {
            cout<<i<<" ";
            kt=1;
        }
    }
    if(kt==0)
        cout<<-1;
    return 0;
}
