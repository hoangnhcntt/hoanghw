#include <bits/stdc++.h>
using namespace std;
int a[1000][1000],n,m;
vector<pair<int,int>> c;
bool cp(int x)
{
    return(sqrt(x)==trunc(sqrt(x)));
}
int main()
{
    freopen("BAI807.INP","r",stdin);
    freopen("BAI807.OUT","w",stdout);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            if(cp(a[i][j]))
            {
                c.push_back(make_pair(i,j));
            }
    for(auto x:c)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
