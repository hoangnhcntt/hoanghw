#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tong=1;
    int n,a[10000];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n-2;i<=n;i++)
    {
        tong*=a[i];
    }
    cout<<tong;
    return 0;
}
