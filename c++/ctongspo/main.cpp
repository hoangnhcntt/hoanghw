#include <bits/stdc++.h>
using namespace std;
int a[1000],n,b[10000];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a+1,a+1+n);
    for(int j=1; j<=n; j++)
        for(int i=1; i<=n; i++)
        {
            if(b[j]==a[i])
            {
                cout<<i<<" ";
                break;
            }
        }
    return 0;
}
