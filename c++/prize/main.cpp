#include <bits/stdc++.h>
using namespace std;
int n,a[10000],k;
int main()
{
    cin>>n>>k;
    int tong;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n,greater<int>());
    cout <<a[k]*k;
    return 0;
}
