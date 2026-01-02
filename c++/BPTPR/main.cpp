#include <bits/stdc++.h>
using namespace std;
int a,b,rmax;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int kh(int x)
{
    int rmax1;
    for(int i=2; i*i<=x; i++)
    {
        if( x%i==0 && nt(i)==true)
            rmax1=max(rmax1,i);
        if(i!=x/i && nt(x/i)==true)
            rmax1=max(rmax1,x/i);
    }
    return rmax1;
}
int main()
{
    cin>>a>>b;
    rmax=max(kh(a),kh(b));
    cout<<rmax;
    return 0;
}
