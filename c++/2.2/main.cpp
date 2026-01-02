#include <bits/stdc++.h>
using namespace std;
int n,a[100000];
void ss()
{
    for(int i=1; i<=n-1; i++)
    {
        int jmin=i;
        for(int j=i+1; j<=n; j++)
            if(a[j]<a[jmin])
                jmin=j;
        swap(a[i],a[jmin]);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    ss();
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
