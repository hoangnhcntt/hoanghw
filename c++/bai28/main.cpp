#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("BAI28.INP","r",stdin);
    freopen("BAI28.OUT","w",stdout);
    cin>>n;
    int rmax;
    rmax=max((n/100)%10,max((n/10)%10,n%10));
    cout <<rmax;
    return 0;
}
