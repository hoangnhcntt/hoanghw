#include <bits/stdc++.h>
using namespace std;
int n,a[10000],b[10000];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i]>>b[i];
    for(int i=1;i<=n;i++)
    {
        int d=0;
        for(int j=1;j<=n;j++)
            if(b[i]==a[j])
              d++;
        cout<<(n-1)+d<<" "<<n-1-d<<endl;
    }
    return 0;
}
