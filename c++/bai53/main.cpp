#include <bits/stdc++.h>
using namespace std;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    int kt=0;
    cin>>n;
    n/=10;
    while(n>0)
    {
        if(!nt(n))
            n/=10;
        else
        {
            cout<<n;
            kt=1;
            break;
        }
    }
    if(kt==0)
        cout<<"NONE";
    return 0;
}
