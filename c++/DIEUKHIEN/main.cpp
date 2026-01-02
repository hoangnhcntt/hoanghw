#include <bits/stdc++.h>
using namespace std;
int m,n,s,k[700][700];
int cot[700],hang[700];
int sl = 0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DIEUKHIEN.INP","r",stdin);
    freopen("DIEUKHIEN.OUT","w",stdout);
    int a[700][700], b[10000];
    cin>>m>>n>>s;
    for (int i=1; i<= m; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    for (int i=1; i<=s; i++)
    {
        cin >> b[i];
        if (b[i]<= m)
            cot[b[i]]++;
        else
            hang[b[i]-m]++;
    }
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
        {
            k[i][j]=(a[i][j]+cot[i]+hang[j])%3;
            if (k[i][j]==0)
                sl++;
        }
    cout << sl;
    return 0;
}
