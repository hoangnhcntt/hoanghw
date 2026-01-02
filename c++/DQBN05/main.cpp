#include <bits/stdc++.h>
using namespace std;
int n;
int b[10000];
int a[10000];
int k;
int tong1=0;
void in()
{
    for (int i = 1; i <= n; i++)
        if(b[i]==1)
            cout << a[i] << " ";
    cout << endl;
}
void xl()
{
    int tong=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            tong+=a[i];
    if(tong==k)
        in();
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
    freopen("DQBN05.INP", "r", stdin);
    freopen("DQBN05.OUT", "w", stdout);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        tong1+=a[i];
    }
    if(tong1>=k)
        pps(1);
    else cout<<"NONE";
    return 0;
}
