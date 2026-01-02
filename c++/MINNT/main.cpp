#include <bits/stdc++.h>
using namespace std;
int nt(long long x)
{
    if(x<2)return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("MINNT.INP","r",stdin);
    //freopen("MINNT.OUT","w",stdout);
    long long n;
    cin >> n;
    for(int i=sqrt(n); i<=n; i++)
    {
        if(nt(i))
        {
            long long tich=i*i;
            if(tich>=n)
            {
                cout<<tich;
                break;
            }
        }
    }
    return 0;
}
