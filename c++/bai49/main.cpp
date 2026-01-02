#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    int i=1;
    int r;
    while(m>0)
    {
        r=n%m;
        n=m;
        m=r;
    }
    cout<<n;
    return 0;
}
