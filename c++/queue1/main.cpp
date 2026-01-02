#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int>> c;
int n,a,b;
int main()
{
    //hoang
    freopen("BAI40.INP","r",stdin);
    freopen("BAI40.OUT","w",stdout);
    cin>>n>>a>>b;
    for(int i=0; i<=n/a; i++)
        for(int j=0; j<=n/b; j++)
            if(i*a+j*b==n)
            {
                pair<int,int> p;
                p.first=i;
                p.second=j;
                c.push(p);
            }
    if(c.empty())
        cout<<"NONE";
    else
    {
        while(!c.empty())
        {
            pair<int,int> p=c.front();
            c.pop();
            cout<<p.first<<" "<<p.second<<endl;
        }
    }
    return 0;
}
