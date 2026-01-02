#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10000];
void sxnb()
{
    for(int i=1; i<=n-1; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
}
int binarySearch(int x)
{
    int l = 0, r = n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x) return mid;
        if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sxnb();
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl<<a[n-1]<<endl;
    cout<<binarySearch(k);
    return 0;
}
