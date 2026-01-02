#include <bits/stdc++.h>
using namespace std;
int a,b,s;
int main()
{
    freopen("giaima.inp","r",stdin);
    freopen("giaima.out","w",stdout);
    cin>>a>>b;
    for(int i=a;a<=b;i++)
       s+=a+i;
    cout <<s;
    return 0;
}
