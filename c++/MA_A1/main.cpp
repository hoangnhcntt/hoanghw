#include <bits/stdc++.h>
using namespace std;
int n;
int du(int x)
{
    int sl=0;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0)
        {
            sl++;
            if(i!=x/i)
                sl++;
        }
    return sl;
}
int main()
{
    freopen("MA_A1.INP","r",stdin);
    freopen("MA_A1.OUT","w",stdout);
    cin>>n;
    cout<<du(n);
    return 0;
}
