#include <bits/stdc++.h>
using namespace std;
int n;
long long k;
int main()
{
    vector<long long> c;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        int j;
        cin>>j;
        c.push_back(j);
    }
    bool p=0;
    for(int i=0; i<c.size(); i++)
        if(c[i]==k)
        {
            p=1;
            cout<<i+1;
            break;
        }
    if(p==0)
        cout<<"NONE";
    return 0;
}
