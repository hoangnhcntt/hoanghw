#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
bool kt(int x,int y)
{
    for(int i=x+1; i<=y; i++)
        if(c[i]<c[i-1])
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
    if(kt(0,c.size()))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
