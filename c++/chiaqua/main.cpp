#include <bits/stdc++.h>
using namespace std;
int m,a[100000];
long long tong;
int main()
{
    freopen("chiaqua.inp","r",stdin);
    freopen("chiaqua.out","w",stdout);
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        tong+=a[i];
    if(tong%200==0)
       cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
