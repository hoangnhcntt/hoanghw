#include <bits/stdc++.h>
using namespace std;
int n,a[100000],ktt=0;
bool kt(int x)
{
    int so;
    int rmax=1e9;
    while(x>0)
    {
        so=x%10;
        if(so<=rmax)
        {
            rmax=so;
            x/=10;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    freopen("PAZADA.INP","r",stdin);
    freopen("PAZADA.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(kt(a[i])==true)
        {
            cout<<a[i]<< " ";
            ktt=1;
        }
    if(ktt==0)
        cout<<-1;
    return 0;
}
