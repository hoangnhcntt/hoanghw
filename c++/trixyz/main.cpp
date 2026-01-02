#include <bits/stdc++.h>
using namespace std;
long long n,a[1000000];
bool kt(int x,int y)
{
    int tong=x*x+y*y;
    for(int i=1; i<=n; i++)
        if(tong==a[i])
            return true;
    return false;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        a[i]=1ll*i*i;
    for(int x=1; x<=n; x++)
        for(int y=1; y<=n; y++)
            if(kt(x,y)==true)
            {
                cout<<x<<" "<<y<<" ";
                for(int i=1; i<=n; i++)
                    if(a[i]==x*x+y*y)
                        cout<<sqrt(a[i])<<endl;
            }
    return 0;
}
