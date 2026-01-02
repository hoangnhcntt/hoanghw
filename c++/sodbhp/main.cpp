#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000000];
bool kt(int x)
{
    int tong=0;
    int sogoc=x;
    while(x>0)
    {
        tong+=x%10;
        x/=10;
    }
    if(sogoc%tong==0)
        return true;
    else
        return false;
}
int he(int l,int r,int k)
{
    int sl=0;
    for(int i=l; i<=r; i++)
        if(kt(a[i])==true)
            sl++;
    return sl++;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=k; i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<he(l,r,k)<<endl;
    }
    return 0;
}
