#include <bits/stdc++.h>
using namespace std;
long long n,a[100000];
int suc(int x)
{
    int sl=0;
    for(int i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            if(i==x/i)
                sl++;
            else
                sl+=2;
        }
    }
    return sl;
}
int main()
{
    freopen("csqr.inp","r",stdin);
    freopen("csqr.out","w",stdout);
    int sl=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(suc(a[i])%2==0)
            sl++;
    cout <<sl;
    return 0;
}
