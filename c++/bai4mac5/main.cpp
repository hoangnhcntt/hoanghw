#include <bits/stdc++.h>
using namespace std;
int l,r,res=0;
bool sodep(int a,int b)
{
    int c[10000],d[10000];
    int k1=0,i=2,j,k2=0;
    while(i<=sqrt(a))
    {
        if(a%i==0)
        {
            j=i;
            a=a/i;
        }
        else
        {
            c[++k1]=j;
            i++;
        }
    }
    if(a>1) c[++k1]=a;
    i=2;
    while(i<=sqrt(b))
    {
        if(b%i==0)
        {
            j=i;
            b=b/i;
        }
        else
        {
            d[++k2]=j;
            i++;
        }
    }
    if(b>1) d[++k2]=b;
    i=2;
    if(k1!=k2) return false;
    for(int i=1; i<=k1; i++)
        if(c[i]!=d[i]) return false;
    return true;
}
int main()
{
    freopen("mac5.inp","r",stdin);
    freopen("mac5.out","w",stdout);
    cin>>l>>r;
    for(int a=1;a<=r-1;a++)
        for(int b=a+1;b<=r;b++)
        if(sodep(a,b)==true)
        res++;
    cout <<res;
    return 0;
}
