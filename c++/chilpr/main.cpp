#include <bits/stdc++.h>
using namespace std;
long long n,tong=0;
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
    freopen("CHILPR.INP","r",stdin);
    freopen("CHILPR.OUT","w",stdout);
    cin>>n;
    while(nt(n)==false)
    {
        tong+=n%10;
        n/=10;
        if(n==0)
            break;
    }
    if(n==0)
        cout<<"NONE"<<" "<<tong;
    else
        cout<<n<<" "<<tong;
    return 0;
}
