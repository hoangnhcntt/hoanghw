#include <bits/stdc++.h>
using namespace std;
long long n;
vector<int> c;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    freopen("PTPRIME.INP","r",stdin);
    freopen("PTPRIME.OUT","w",stdout);
    cin>>n;
    int sl;
    for(int i=2;i<=n/2;i++)
        if(nt(i) && nt(n-i))
          sl++;
    cout <<sl;
    return 0;
}
