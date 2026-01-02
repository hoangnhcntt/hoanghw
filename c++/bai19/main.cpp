#include <bits/stdc++.h>
using namespace std;
int n,m,z;
int main()
{
    freopen("BAI19.INP","r",stdin);
    freopen("BAI19.OUT","w",stdout);
    cin>>n>>m>>z;
    int rmax=min(n,min(m,z));
    cout <<rmax;
    return 0;
}
