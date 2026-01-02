#include <bits/stdc++.h>
using namespace std;
bool kt(int x)
{
    if(trunc(sqrt(x))==sqrt(x))
        return true;
    else
        return false;
}
int main()
{
    long long n;
    freopen("squa.inp","r",stdin);
    freopen("squa.out","w",stdout);
    cin>>n;
    for(int i=n+1; i<=1e9; i++)
        if(kt(i)==true)
            if(i>n)
            {
                cout<<i;
                break;
            }
    return 0;
}
