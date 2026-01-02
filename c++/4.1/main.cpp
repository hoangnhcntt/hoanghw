#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> c;
int main()
{
    cin>>n>>m;
    int gcd=__gcd(n,m);
    for(int i=1; i<=sqrt(gcd);i++)
        if(gcd%i==0)
        {
            c.push_back(i);
            if(i!=gcd/i)
                c.push_back(gcd/i);
        }
    sort(c.begin(),c.end());
    for(int x:c)
        cout<<x<<" ";
    return 0;
}
