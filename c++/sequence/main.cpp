#include <bits/stdc++.h>
using namespace std;
int a[100000],k,n,j;
int daonguoc(int x)
{
    int tong=0;
    while(x>0)
    {
        tong*=10;
        tong+=x%10;
        x/=10;
    }
    return tong+2;
}
void hello(int x)
{
    a[1]=1;
    for(int i=2; i<=1e4; i++)
    {
        a[i]=daonguoc(a[i-1]);
    }
    cout<<a[x]<<endl;
}
int main()
{
    while(cin>>n)
    {
        hello(n);
    }
    return 0;
}
