#include <bits/stdc++.h>
using namespace std;
int n,a[100000],sl=0,k;
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==k)
            sl++;
    }
    cout <<sl;
    return 0;
}
