#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    set<int> c;
    int res;
    for(int i=1;i<=n;i++)
        for(int j=i;j<+n;j++)
    {
        c.clear();
        for(int p=i;p<=j;i++)
            c.insert(a[p]);
        if(c.size()==j-i+1)
            res=max(res,j-i+1);
    }
    cout <<res;
    return 0;
}
