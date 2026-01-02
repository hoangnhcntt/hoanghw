#include <bits/stdc++.h>
using namespace std;
string n;
int rmaxchan=1e9;
int main()
{
    freopen("NUMPERMU.INP","r",stdin);
    freopen("NUMPERMU.OUT","w",stdout);
    cin>>n;
    for(int i=0; i<=n.size()-1; i++)
        if((n[i]-48)%2==0)
            rmaxchan=min(rmaxchan,n[i]-48);
    for(int i=0; i<=n.size()-1; i++)
        if(rmaxchan==n[i]-48)
        {
            int y=n.find(n[i]);
            n.erase(y,1);
        }
    sort(n.begin(),n.end());
    reverse(n.begin(),n.end());
    cout<<n<<rmaxchan;
    return 0;
}
