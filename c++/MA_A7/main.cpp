#include <bits/stdc++.h>
using namespace std;
long long n,m,a,b,sl=0;
int main()
{
    freopen("MA_A7.INP","r",stdin);
    freopen("MA_A7.OUT","w",stdout);
    cin>>n>>m>>a>>b;
    for(int i=n; i<=m; i++)
        if(i%a==0 || i%b==0)
            sl++;
    cout<<sl;
    return 0;
}
