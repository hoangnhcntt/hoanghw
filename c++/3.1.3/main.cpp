#include <bits/stdc++.h>
using namespace std;
bool cp(int x)
{
    if(trunc(sqrt(x))==sqrt(x))
        return true;
    return false;
}
int n;
int a[100000],sl=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(cp(a[i]))
         sl++;
    cout <<sl;
    return 0;
}
