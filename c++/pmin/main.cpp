#include <bits/stdc++.h>
using namespace std;
int n,c[10000],sl,x,a,b,k,rmin;
int p(int u)
{
    int i=2;
    while(u>1)
    {
        if (u%i==0)
        {
            rmin=i;
            break;
        }
        else i++;
    }
    return rmin;
}
int main()
{
    freopen("a.inp","r",stdin);
    cin>>n;
    while(n--)
    {
        sl=0;
        cin>>x>>a>>b;
        for(int i=a; i<=b; i++)
        {
            if(p(i)==x)
                sl++;
        }
        cout<<sl<<endl;
    }
}
