#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000];
int main()
{
    freopen("tich9.inp","r",stdin);
    freopen("tich9.out","w",stdout);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem=1;
    for(int i=1; i<=n; i++)
        for(int j=i+1; i<=n-1; i++)
        {
            int c1 = a[i]%10;
            int c2 = a[j]%10;
            if ((c1 * c2) % 10 == 9)
                dem++;
        }
    cout<<dem;
    return 0;
}
