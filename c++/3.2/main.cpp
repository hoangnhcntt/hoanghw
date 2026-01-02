#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
int tong=0;
bool cp(int x)
{
    if(trunc(sqrt(x))==sqrt(x))
        return true;
    return false;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        tong+=a[i];
    cout <<tong;
    return 0;
}
