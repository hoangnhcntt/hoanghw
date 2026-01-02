#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin>>n;
    long long sl=0;
    for(long long i=1; i<=sqrt(n); i++)
        if(n%i==0)
        {
            sl++;
            if(i!=n/i)
                sl++;
        }
    cout <<sl;
    return 0;
}
