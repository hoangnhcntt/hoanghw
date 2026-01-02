#include <bits/stdc++.h>
using namespace std;
int n,a[10000],b[100000];
int rmin=1e9;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    int i=1;
    int j=n;
    while(i<=n && j>=1)
    {
        rmin=min(rmin,abs(a[i]+b[j]));
        i++;
        if(i==n)
        {
            j--;
            i=1;
        }
    }
    cout<<rmin;
    return 0;
}
