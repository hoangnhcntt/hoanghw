#include <bits/stdc++.h>
using namespace std;
long long m,a[100000];
int tcs(int x)
{
    long long s=1;
    while(x>0)
    {
        int r=x%10;
        x/=10;
        s*=r;
    }
    return s;
}
int main()
{
    cin>>m;
    for(int i=1; i<=100000; i++)
        a[i]=tcs(i);
    for(int i=1; i<=100000; i++)
        if(a[i]==m)
        {
            cout<<i;
            break;
        }
    return 0;
}
