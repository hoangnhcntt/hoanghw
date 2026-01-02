#include<bits/stdc++.h>
using namespace std;
long long n;
int k;
int main()
{
    freopen("DANBO.INP","r",stdin);
    freopen("DANBO.OUT","w",stdout);
    cin>>n>>k;
    queue<long long> c;
    c.push(n);
    int dem=0;
    while(!c.empty())
    {
        long long j=c.front();
        c.pop();
        if((j-k)%2==0 &&(j-k)>=2)
        {
            c.push((j-k)/2);
            c.push((j+k)/2);
        }
        else dem++;
    }
    cout<<dem;
    return 0;
}
