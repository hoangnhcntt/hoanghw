#include <bits/stdc++.h>
using namespace std;
bool fre[10000];
int n;
int tich(int x)
{
    int tong=0;
    while(x>0)
    {
        tong+=pow(x%10,2);
        x/=10;
    }
    return tong;
}
bool kt(int u)
{
    int p;
    while(1==1)
    {
        p=tich(u);
        if(p==1) return true;
        if(fre[p]==true) return false;
        fre[p]=true;
        u=p;
    }
}
int main()
{
    freopen("happynum.inp","r",stdin);
    freopen("happynum.out","w",stdout);
    cin>>n;
    if(kt(n)==false)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
