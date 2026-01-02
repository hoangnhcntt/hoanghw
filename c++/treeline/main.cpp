#include <bits/stdc++.h>
using namespace std;
int n,a[10000],k,s=0,sl=0,rmax;
int tong(int x,int y)
{
    int s=0;
    for(int i=x; i<=y; i++)
        s+=a[i];
    return s;
}
bool kt(int x,int y)
{
    if(x/y==k)
        return true;
    return false;
}

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            sl++;
            if(kt(tong(i,j),sl)==true)
                rmax=max(rmax,sl);
        }
    }
    cout <<rmax;
    return 0;
}
