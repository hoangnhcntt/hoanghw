#include <bits/stdc++.h>
using namespace std;
int a[100000],n;
vector<string> g;
syyy rmax=-1e9;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int j=1;
    string kt="";
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]<=a[i])
            kt.push_back(a[i]);
        else {
            g.push_back(kt);
            kt.clear();
            j++;
        }
    }
    for(int x:g)
        rmax=max(rmax,x);
    return 0;
}
