#include <bits/stdc++.h>
using namespace std;
int c[10000],k,tong=0;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(nt(a[i])==false)
        {
            c[++k]=a[i];
            tong+=a[i];
        }
    if(tong!=0)
    {
        cout <<tong<<endl;
        for(int i=1; i<=k; i++)
            cout<<c[i]<<" ";
    }
    else
        cout<<0<<endl<<"NONE";
    return 0;
}
