#include <bits/stdc++.h>
using namespace std;
int n,t[100000];
int res=1e9;
int a[100000];
vector<vector<long long>> d;
set<long long> c;
void xl(int u)
{
    vector<long long> b;
    for(int i=1; i<=u; i++)
        if(c.find(a[i])==c.end()) return;
    for(int i=1; i<=u; i++)
    {
        if(u==res)
            d.push_back(b);
        else
        {
            if(u<res)
            {
                res=u;
                d.clear();
                d.push_back(b);
            }
        }
    }
}
void thu(int i)
{
    for(int j=a[i-1]; 2*j<=n-t[i-1]; j++)
    {
        a[i]=j;
        t[i]=t[i-1]+j;
        thu(i+1);
    }
    a[i]=n-t[i-1];
    xl(i);
}
int main()
{
    cin>>n;
    long long f,f1=1,f2=1;
    c.insert(1);
    for(int i=3; i<=91; i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        c.insert(f);
    }
    t[0]=0;
    a[0]=1;
    thu(1);
    for(vector<long long> x:d)
    {
        for(long long t:x) cout<<t<<" ";
        cout<<endl;
    }
    return 0;
}
