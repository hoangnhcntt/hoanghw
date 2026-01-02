#include <bits/stdc++.h>
using namespace std;
int n,m,rmax=-1e9;
int tongcs(int x)
{
    int tong=0;
    while(x>0)
    {
        tong+=x%10;
        x/=10;
    }
    return tong;
}
int main()
{
    freopen("MCD.INP","r",stdin);
    freopen("MCD.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=sqrt(min(n,m)); i++)
    {
        if(n%i==0 && m%i==0)
        {
            rmax=max(rmax,tongcs(i));
            if(i!=min(n,m)/i)
            {
                int k=min(n,m)/i;
                if(n%k==0 && m%k==0)
                    rmax=max(rmax,tongcs(k));
            }

        }
    }
    cout <<rmax;
    return 0;
}
