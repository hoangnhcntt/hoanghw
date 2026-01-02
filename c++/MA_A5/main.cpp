#include <bits/stdc++.h>
using namespace std;
long long n,m,k,sl=0;
int main()
{
    freopen("MA_A5.INP","r",stdin);
    freopen("MA_A5.OUT","w",stdout);
    cin>>n>>m>>k;
    for(int i=n; i<=m; i++)
        if(i%k==0)
            sl++;
    cout<<sl;
    return 0;
}
