#include <bits/stdc++.h>
using namespace std;
int a[700][700];
vector<pair<int,int>> c;
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
int main()
{
    freopen("BAI808.INP","r",stdin);
    freopen("BAI808.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(nt(a[i][j]))
            {
                pair<int,int> q;
                q.first=i;
                q.second=j;
                c.push_back(q);
            }
        }
    }
    if(c.empty())
        cout<<-1;
    for(pair<int,int> x:c)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
