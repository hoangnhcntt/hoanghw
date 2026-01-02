#include <bits/stdc++.h>
using namespace std;
int n,a[10000],sl,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
        if(binary_search(a+1,a+1+n,a[i]+k)==true)
          ++sl;
    cout <<sl;
    return 0;
}
