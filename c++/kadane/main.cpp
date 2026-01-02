#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[100000];
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    s[0]=0;
    for(int i=1; i<=n; i++)
        s[i]=max(s[i-1]+a[i],a[i]);
    int res=-1e9;
    for(int i=1; i<=n; i++)
        res=max(res,s[i]);
    cout<<res;
    return 0;
}
