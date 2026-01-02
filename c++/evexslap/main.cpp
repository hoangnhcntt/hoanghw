#include <bits/stdc++.h>
using namespace std;
int n,a[100000];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n,greater<int>());
    cout<<a[1]<<" "<<a[n];
    return 0;
}
