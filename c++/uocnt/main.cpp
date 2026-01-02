#include <bits/stdc++.h>
using namespace std;
int n,a[1000],k;
int main()
{
    cin>>n;
    int i=2;
    while(i<sqrt(n))
    {
        if(n%i==0)
        {
            a[++k]=i;
            n/=i;
        }
        else
            i++;
    }
    for(int i=1; i<=k; i++)
        if(a[i]!=a[i-1])
            cout<<a[i]<<" ";
    if(n>0 && n!=1)
        cout<<n;
    return 0;
}
