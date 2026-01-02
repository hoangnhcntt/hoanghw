#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
bool kt(int x)
{
    int tong=0;
    if(nt(x)==true)
    {
        while(x>0)
        {
            tong+=x%10;
            x/=10;
        }
        if(nt(tong)==true)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    freopen("ASNT.INP","r",stdin);
    freopen("ASNT.OUT","w",stdout);
    cin>>n;
    if(kt(n)==true)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    for(int i=2; i<=n; i++)
        if(kt(i)==true)
            cout<<i<<" ";
    return 0;
}
