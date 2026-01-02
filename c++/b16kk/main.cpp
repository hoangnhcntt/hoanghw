#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
double tong;
bool nt(int x)
{
    if(x<2) return false;
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
    for(auto x:c)
        if(nt(x))
            tong+=x;
    cout<<tong;
    return 0;
}
