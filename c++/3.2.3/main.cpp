#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
bool kt(int x)
{
    if(x%3==0 && x%5==0)
        return true;
    return false;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(kt(a[i]))
        tong+=a[i];
    cout <<tong;
    return 0;
}
