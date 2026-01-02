#include <bits/stdc++.h>
using namespace std;
bool f[10000000];
int a,b,c,rmax;
void sangera(int u)
{
    memset(f,true,sizeof(f));
    f[1]=false;
    int i=2;
    while(i<=sqrt(u))
        if(f[i]==true)
        {
            int k=2;
            while(k*i<=u)
            {
                f[k*i]=false;
                k++;
            }
            i++;
        }
        else
            i++;
}
int main()
{
    //freopen("SQUASEQ.INP","r",stdin);
    //freopen("SQUASEQ.OUT","w",stdout);
    cin>>a>>b>>c;
    sangera(1000000);
    if(f[a]==true)
        rmax=max(rmax,a);
    if(f[b]==true)
        rmax=max(rmax,b);
    if(f[c]==true)
        rmax=max(rmax,c);
    cout<<rmax;
    return 0;
}
