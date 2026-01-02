#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int demuoc(int x)
{
    int d=0;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0)
        {
            d++;
            if(i!=x/i)
                d++;
        }
    return d;
}
int demuoc1(int x)
{
    int d=0;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0)
        {
            d+=i;
            if(i!=x/i)
                d+=x/1;
        }
    return d;
}
int demuoc2(int x)
{
    int d=0;
    for(int i=2; i<=x; i++)
        if(x%i==0 && nt(i)==true)
        {
            d++;
            if(i!=x/i && nt(x/i)==true)
                d++;
        }
    return d;
}
int main()
{
    freopen("listdiv.inp","r",stdin);
    freopen("listdiv.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        cout<<demuoc(a[i])<<" "<<demuoc1(a[i])<<" "<<demuoc2(a[i])<<" "<<a[i]+1<<endl;
    }
    return 0;
}
