#include <bits/stdc++.h>
using namespace std;
long long n;
bool NT(int x)
{
    if(x<2)return false;
    if(x<4)return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)return false;
    return true;
}
long long tcs(long long x)
{
    long long s=0;
    while(x>0)
    {
        int r=x%10;
        x/=10;
        s+=r;
    }
    return s;
}
int main()
{
    freopen("SODB.INP","r",stdin);
    freopen("SODB.OUT","w",stdout);
    cin>>n;
    if(NT(tcs(n)))cout<<"YES";
    else cout<<"NO";
    return 0;
}
