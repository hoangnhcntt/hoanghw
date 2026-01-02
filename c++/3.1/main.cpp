#include <bits/stdc++.h>
using namespace std;
bool f[10000000];
int n,a[10000];
void sangera(int u)
{
    memset(f,true,sizeof(f));
    f[1]=false;
    int i=2;
    while(i<=sqrt(u))
        if(f[i]==true)
        {
            int k=2;
            while(k*i<=u)
            {
                f[k*i]=false;
                k++;
            }
            i++;
        }
        else
            i++;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sangera(1000000);
    for(int i=1; i<=n; i++)
        if(f[a[i]]==true)
            cout<<a[i]<<" ";
    return 0;
}
