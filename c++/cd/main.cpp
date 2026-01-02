#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
           if(i*2+j*4==k)
             cout<<i<<" "<<j<<endl;
    return 0;
}
