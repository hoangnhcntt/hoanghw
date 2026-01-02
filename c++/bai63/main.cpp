#include <bits/stdc++.h>
using namespace std;
int n,j;
vector<int> c;
int i=0;
int main()
{
    cin>>n>>j;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    for(auto x:c)
    {
        i++;
        if(x==j)
        {
            cout<<i;
            break;
        }
    }
    if(i==n && c[i-1]!=j)
        cout<<-1;
    return 0;
}
