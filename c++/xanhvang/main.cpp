#include <bits/stdc++.h>
using namespace std;
int a,b;
int vang;
int main()
{
    freopen("xanhvang.inp","r",stdin);
    freopen("xanhvang.out","w",stdout);
    cin>>a>>b;
    long long s=a*b;
    if(s<=4)
        cout<<0<<" "<<1;
    else{
        vang=(a-2)*(b-2);
        cout<<vang<<" "<<s-vang;
    return 0;
}
