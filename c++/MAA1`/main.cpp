#include <bits/stdc++.h>
using namespace std;
long long n;
vector<pair<int,int>> c;
void pt(int x)
{
    int i=2;
    int dem=0;
    while(i<=sqrt(x))
    {
        if(x%i==0)
        {
            dem++;
            x/=i;
        }
        else
        {
            if(dem>0)
            {
                c.push_back(make_pair(i,dem));
                dem=0;
            }
            i++;
        }
    }
    if(x>1)
    {
        if(x==i)
        {
            c.push_back(make_pair(x,dem+1));
        }
        else
            c.push_back(make_pair(x,1));
    }
}
int main()
{
    freopen("MAA1.INP","r",stdin);
    freopen("MAA1.OUT","w",stdout);
    cin>>n;
    pt(n);
    int res=1;
    for(int i=0; i<=c.size()-1; i++)
    {
        res*=c[i].second+1;
    }
    cout<<res;
    return 0;
}
