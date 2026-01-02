#include <bits/stdc++.h>
using namespace std;
int n,a,b;
vector<int> c;
int dem(int x)
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
    cin>>n>>a>>b;
    int sl=0;
    for(int i=1; i<=n; i++)
    {
        int p=dem(i);
        if(p>=a && p <= b)
            c.push_back(i);
    }
    sort(c.begin(),c.end());
    for(int x:c)
        cout<<x<<" ";
    return 0;
}
