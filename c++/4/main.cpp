#include <bits/stdc++.h>
using namespace std;
int n,a[100000],sl=0,x;
int main()
{
    cin>>n>>x;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            for(int z=j+1; z<=n; z++)
            {
                int tong=a[i]+a[j]+a[z];
                if(tong==x)
                    cout<<a[i]<<" "<<a[j]<<" "<<a[z];
            }
    return 0;
}
