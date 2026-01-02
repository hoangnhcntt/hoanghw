#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sl=0;
    int s[100000];
    cin >> n>>k;
    int a[1000];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    s[0]=0;
    for(int i=1; i<=n; i++)
        s[i]=s[i-1]+a[i];
    int res=-1e9;
    for(int i=1; i<=n; i++)
        for(int j=i; j<=n; j++)
        {
            int q=s[j]-s[i-1];
            if(q<=k)
                res=max(res,j-i+1);
        }
    cout<<res;
    return 0;
}
