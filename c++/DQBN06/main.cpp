#include <bits/stdc++.h>
using namespace std;
int n, k;
int b[10000];
int a[10000];
vector<int> c;
int res=0;
bool kt()
{
    int sl1 = 0;
    for (int i = 1; i <= n; i++)
        if (b[i] == 1)
            sl1+=a[i];

    return (sl1 <= k);
}
void xl2()
{
    int sl=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            sl++;
    if(sl>=res)
    {
        if(sl>res)
            c.clear();
        res=sl;
        for(int i=1; i<=n; i++)
            if(b[i]==1)
                c.push_back(a[i]);
    }

}
void xl()
{
    if (kt())
        xl2();
}
void pps(int x)
{
    for (int i = 0; i <= 1; i++)
    {
        b[x] = i;
        if (x == n)
            xl();
        else
            pps(x + 1);
    }
}
int main()
{
    freopen("DQBN06.INP", "r", stdin);
    freopen("DQBN06.OUT", "w", stdout);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    pps(1);
    cout<<res<<endl;
    int j=0;
    for(int i=1; i<=n; i++)
        if(j==res)
        {
            cout<<endl;
            j=0;
        }
        else
        {
            cout<<c[i-1]<<" ";
            j++;
        }
    return 0;
}
