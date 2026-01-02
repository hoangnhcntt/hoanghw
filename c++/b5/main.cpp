#include <bits/stdc++.h>
using namespace std;
int m,n,k;
int dep(int x)
{
    int sl=0;
    for(int i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            sl++;
            if(i!=x/i)
                sl++;
        }
    }
    return sl;
}
int main()
{
    cin>>m>>n>>k;
    if(m%k==0 && n%k==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    int sl1=0;
    for(int i=m;i<=n;i++)
        if(i%k==0)
         sl1++;
    cout<<sl1<<endl;
    cout<<dep(m)<<" "<<dep(n);
    return 0;
}

