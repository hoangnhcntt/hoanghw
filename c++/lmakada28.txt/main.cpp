#include <bits/stdc++.h>
using namespace std;
int a[100000],n;
bool f[1000000];
void sangera(int u)
{
    memset(f,true,sizeof(f));
    int i=2;
    while(i<=sqrt(u))
        if(f[i]==true)
        {
            int k=2;
            while(i*k<=u)
            {
                f[i*k]=u;
                k++;
            }
            i++;
        }
        else i++;
}
int main()
{
    int p[100000];
    int sl=0;
    cin>>n;
    sangera(1000000);
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n; i>=1; i--)
    {
        if(f[a[i]])
        {
            sl++;
            p[sl]=a[i];
        }
    }
    cout<<p[2]<<","<<p[1];
    return 0;
}
