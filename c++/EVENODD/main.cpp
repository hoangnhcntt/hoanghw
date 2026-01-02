#include <bits/stdc++.h>
using namespace std;
int n,a,b;
int main()
{
    freopen("EVENODD.INP","r",stdin);
    freopen("EVENODD.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cin>>b;
        if(__gcd(a,b)%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }
    return 0;
}
