#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
vector<int> d;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    int i=0;
    for(int x:c)
    {
        i++;
        if(nt(x))
            d.push_back(i);
    }
    cout <<d.size()<<endl;
    for(auto x:d)
        cout<<x<<" ";
    return 0;
}
