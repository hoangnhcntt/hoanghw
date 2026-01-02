#include <bits/stdc++.h>
using namespace std;
long long n;
int tongbp(int x)
{
    long long s=0;
    while(x>0)
    {
        int r=x%10;
        x/=10;
        s+=(r*r);
    }
    return s;
}
long long tichbp(int x)
{
    long long s=1;
    while(x>0)
    {
        int r=x%10;
        s*=1ll*pow(r,2);
        x/=10;
    }
    return s;
}
int max2(int x)
{
    int c[100000],k;
    while(x>0)
    {
        c[++k]=x%10;
        x/=10;
    }
    sort(c+1,c+1+k);
    for(int i=k; i>=1; i--)
        if(c[i]!=c[k])return c[i];
    return -1;
}
int csxhnn(int x)
{
    int c[10];
    memset(c,0,sizeof(c));
    while(x>0)
    {
        int r=x%10;
        c[r]++;
        x/=10;
    }
    int rmax=-1e9;
    for(int i=0; i<=9; i++)
        rmax=max(rmax,c[i]);
    return rmax;
}
int csxhin(int x)
{
    int c[10];
    memset(c,0,sizeof(c));
    while(x>0)
    {
        int r=x%10;
        c[r]++;
        x/=10;
    }
    int rmin=1e9;
    for(int i=0; i<=9; i++)
        rmin=min(rmin,c[i]);
    return rmin;
}
int main()
{
    cin>>n;
    cout<<tongbp(n)<<" "<<tichbp(n)<<" "<<max2(n)<<" "<<csxhnn(n)<<" "<<csxhin(n)<<" "<<endl;
    return 0;
}
