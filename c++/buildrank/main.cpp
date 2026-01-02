#include <bits/stdc++.h>
using namespace std;
int n;
string a[100000];
int b[100000],c[100000];
void sx()
{
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(b[i]>b[j])
            {
        swap(a[i],a[j]);
        swap(b[i],b[j]);
    }
}
int main()
{
    freopen("buildrank.inp","r",stdin);
    freopen("buildrank.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i]>>b[i];
    for(int i=1; i<=n; i++)
        c[i]=1;
    sx();
    for(int i=1; i<=n; i++)
    {
        if(b[i]==b[i-1])
        {
            c[i]=c[i-1];
        }
        else
            c[i]=c[i-1]+1;
    }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" "<<b[i]<<" - Hạng "<<c[i]<<endl;
    return 0;
}
