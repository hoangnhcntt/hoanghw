#include <bits/stdc++.h>
using namespace std;
int n,a[100000];
int main()
{
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cin>>a[i];
        i++;
    }
    int j=n;
    while(j>=1)
        cout<<a[i]<<" ";
    return 0;
}
