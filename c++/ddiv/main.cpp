#include <bits/stdc++.h>
using namespace std;
long long n, a[100000], tong=0,res=0;
bool kt(int x, int y)
{
    int tong1=0,sl=0;
    for(int i=1; i<=n; i++)
    {
        tong1+=a[i];
        if(tong1==x)
        {
            sl++;
            tong1=0;
        }
        if(tong1>x) return false;
    }
    return true;
}
int main()
{
    freopen("ddiv.inp","r",stdin);
    freopen("ddiv.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        tong+=a[i];
    }
    for(int i=n; i>=1; i--)
        if(tong%i==0)
            if(kt(tong/i,tong)==true)
            {
                res=i;
                break;
            }
    cout<<res;
    return 0;
}
