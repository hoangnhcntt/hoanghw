#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
bool kt(int x)
{
    int tong=0;
    while(x>0)
    {
        tong+=x%10;
        x/=10;
    }
    if(tong%11==0)
        return true;
    return false;
}
int main()
{
    cin>>n;
    for(int i=n+1; i<=n*n; i++)
        if(nt(i))
            if(kt(i))
            {
                cout<<i;
                break;
            }
    return 0;
}
