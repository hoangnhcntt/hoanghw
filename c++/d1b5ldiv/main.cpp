#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,tong;
    cin>>n>>m>>p;
    int i=2;
    int a[10000],k;
    while(i<sqrt(n))
    {
        if(n%i==0)
        {
            a[++k]=i;
            n/=i;
        }
        else
            i++;
    }
    i=2;
    while(i<sqrt(m))
    {
        if(m%i==0)
        {
            a[++k]=i;
            m/=i;
        }
        else
            i++;
    }
    i=2;
    while(i<sqrt(p))
    {
        if(p%i==0)
        {
            a[++k]=i;
            p/=i;
        }
        else
            i++;
    }
    sort(a+1,a+1+k);
    for(int i=1; i<=n; i++)
        if(a[i]==a[i+1] && a[i]!=a[i-1])
            tong+=a[i];
    cout<<tong;
    return 0;
}
