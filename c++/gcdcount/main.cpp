#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
        {
            if(__gcd(i,j)==k)
                sl++;
        }
    cout <<sl;
    return 0;
}
