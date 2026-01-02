#include <bits/stdc++.h>
using namespace std;
long long n,m,sl;
long long tong(long long x)
{
    long long tong1=x;
    while(x>0)
    {
        tong1+=x%10;
        x/=10;
    }
    return tong1;
}
int main()
{
    cin>>n>>m;
    for(long long i=n; i<=n+m; i++)
        if(tong(i)<=n+m && tong(i)>=n)
            sl++;
    cout<<sl;
    return 0;
}
