#include <bits/stdc++.h>
using namespace std;
long long n,rmax;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i<=sqrtx; i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    freopen("pridiv.inp","r",stdin);
    freopen("pridiv.out","w",stdout);
    cin>>n;
    if(nt(n)==true)
        cout<<n;
    else
    {
        for(long long i=2; i*i<=n; i++)
        {
            if(n%i==0)
                if(nt(i)==true)
                {
                    rmax=max(rmax,i);
                    if(nt(n/i)==true)
                        rmax=max(rmax,n/i);
                }
        }
        cout<<rmax;
    }
    return 0;
}
