#include <bits/stdc++.h>
using namespace std;
int n,a[10000],k,sl;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>k;
    for(int i=1; i<=n; i++)
        if(binary_search(a+1,a+1+n,abs(k-a[i])))
            sl++;
    cout <<sl;
    return 0;
}
