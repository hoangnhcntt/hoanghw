#include <bits/stdc++.h>
using namespace std;
long long n,m;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
bool cp(int x)
{
    if(sqrt(x)==trunc(sqrt(x)))
        return true;
    return false;
}
int main()
{
    cin>>n>>m;
    int sl=0;
    for(long long i=sqrt(n); i<=sqrt(m); i++)
        if(nt(sqrt(i)) && cp(i))
        {
            sl++;
        }
    cout<<sl;
    return 0;
}
