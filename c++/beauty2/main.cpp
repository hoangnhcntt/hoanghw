#include <bits/stdc++.h>
using namespace std;
int n,a[1000],k;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
bool sodep(int x)
{
    int s=0,sl=0;
    while(x>0)
    {
        s+=pow(x%10,2);
        x/=10;
    }
    if(nt(s))
        return true;
    return false;
}
int main()
{
    for(int i=1; i<=1000; i++)
        if(sodep(i)==true)
            a[++k]=i;
    while(cin>>n)
        cout<<a[n]<<endl;
    return 0;
}
