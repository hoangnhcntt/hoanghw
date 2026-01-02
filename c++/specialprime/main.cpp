#include <bits/stdc++.h>
using namespace std;
int n,k;
bool nt(int x)
{
    if(x<2)
        return false;
    if(x<4)
        return true;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int tongcs(int x)
{
    int tong=0;
    int sl=0;
    while(x>0)
    {
        tong+=x%10;
        sl++;
        x/=10;
    }
    if(sl==k)
        return tong;
}
int main()
{
    cin>>n>>k;
    for(int i=n+1; i<=n*n; i++)
        if(nt(tongcs(i)) && nt(i))
        {
            cout<<i;
            break;
        }
    return 0;
}
