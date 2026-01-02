#include <bits/stdc++.h>
using namespace std;
int n;
int dao(int x)
{
    int sogoc=x;
    int sodao=0;
    while(x>0)
    {
        sodao*=10;
        sodao+=x%10;
        x/=10;
    }
    return sodao;
}
bool kt(int x)
{
    if(dao(x)==x)
        return true;
    return false;
}
int main()
{
    freopen("sodx.inp","r",stdin);
    freopen("sodx.out","w",stdout);
    cin>>n;
    int luu1=n;
    luu1+=dao(n);
    while(kt(luu1)==false)
        luu1+=dao(luu1);
    cout<<luu1;
    return 0;
}
