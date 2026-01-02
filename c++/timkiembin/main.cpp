#include <bits/stdc++.h>
using namespace std;
int n;
long long k;
int a[100000];
int tknp(int x,int u,int v)
{
    int dau=u;
    int cuoi=v;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        if(a[giua]==x)
            return giua;
        if(a[giua]>x)
            cuoi=giua-1;
        else dau=giua+1;
    }
    return -1;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    if(tknp(k,1,n)!=-1)
        cout <<tknp(k,1,n);
    else cout<<"NONE";
    return 0;
}
