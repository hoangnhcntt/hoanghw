#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("subl.inp","r",stdin);
    freopen("subl.out","w",stdout);
    int n;
    long long m, sum = 0,tong;
    cin >> n >> m;
    int a[100000];
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) tong+=a[i];
    if(tong<m)
        cout<<-1;
    else
    {
        int u = 0, v = 0, ngannhat=1e9;
        while (v < n)
        {
            sum += a[v++];
            while (sum >= m)
            {
                ngannhat = min(ngannhat, v - u);
                sum -= a[u++];
            }
        }
        cout<<ngannhat;
    }
}
