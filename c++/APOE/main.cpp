#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0) return false;
    return true;
}
int main()
{
    long long tong=0;
    long long tu1=0;
    freopen("APOE.inp","r",stdin);
    freopen("APOE.out","w",stdout);
    cin>>n;
    long long n1=n;
    while(n1>0)
    {
        tong+=n1%10;
        n1/=10;
    }
    if(nt(tong)==true)
    {
        cout<<"YES"<<endl;
        tu1=(n*(n+1))/2;
        cout<<tu1;
    }
    else
        cout<<"NONE";
    return 0;
}
