#include <bits/stdc++.h>
using namespace std;
long long n,c[100000],k=0;
int tu(int x)
{
    long long s=0;
    for(int i=1; i*i<=x; i++)
        if(x%i==0)
        {
            s+=i;
            if(i!=x/i)s+=x/i;
        }
    return s;
}
void skibidi()
{
    int x=1;
    while(x<n)
    {
        c[k++]=x;
        x+=tu(x);
    }
}
int main()
{
    freopen("CSDEP.INP","r",stdin);
    freopen("CSDEP.OUT","w",stdout);
    cin>>n;
    skibidi();
    for(int i=0; i<k; i++)
        cout<<c[i]<<" ";
    return 0;
}
