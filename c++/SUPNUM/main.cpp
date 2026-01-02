#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
vector<int> d;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
bool kt(int x)
{
    int a[10000];
    int k=0;
    int tong=0;
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            if(nt(i))
            {
                a[++k]=i;
                if(i!=x/i)
                    if(nt(x/i))
                        a[++k]=x/i;
            }
        }
    }
    for(int i=1; i<=k; i++)
        tong+=a[i];
    if(tong%5==0)
        return true;
    else return false;
}
int main()
{
    freopen("SUPNUM.INP","r",stdin);
    freopen("SUPNUM.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    for(int x:c)
        if(kt(x) && x!=2)
            d.push_back(x);
    if(!d.empty())
        for(int x:d)
            cout<<x<<" ";
    else cout<<-1;
    return 0;
}
