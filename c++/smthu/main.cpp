#include <bits/stdc++.h>
using namespace std;
int n,a[10000000];
int tong(int x)
{
    int tong1=0;
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
            tong1+=i;
    }
    return tong1;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        cout<<tong(a[i])<<" ";
    return 0;
}
