#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
         return false;
    return true;
}
int main()
{
    freopen("mpri.inp","r",stdin);
    freopen("mpri.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        int l=k;
        while(nt(l)==false)
            l++;
        cout<<l<<endl;
    }
    return 0;
}
