#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
vector<int> d;
int l=1;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
        d.push_back(k);
    }
    reverse(d.begin(),d.end());
    for(int i=1; i<=n; i++)
        if(c[i-1]!=d[i-1])
        {
            cout<<"NO";
            l=0;
            break;
        }
    if(l!=0)
        cout<<"YES";
    return 0;
}
