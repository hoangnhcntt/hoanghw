#include <bits/stdc++.h>
using namespace std;
long long n,a[100000];
long long du(long long x)
{
    long long sl=0;
    for(long long i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            sl+=i;
            if(i!=x/i)
                sl+=x/i;
        }
    }
    return sl;
}
int main()
{
    freopen("MA_C2.INP","r",stdin);
    freopen("MA_C2.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cout<<du(a[i])<<endl;
    return 0;
}
