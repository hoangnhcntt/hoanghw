#include <bits/stdc++.h>
using namespace std;
int n,s[100000],slmax=0,slmin=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    int rmin=1e9;
    int rmax=-1e9;
    for(int i=1; i<=n; i++)
    {
        rmax=max(rmax,s[i]);
        rmin=min(rmin,s[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(rmin==s[i])
            slmin++;
        if(rmax==s[i])
            slmax++;
    }

    cout <<rmax<<" "<<slmax<<endl<<rmin<<" "<<slmin;
    return 0;
}
