#include <bits/stdc++.h>
using namespace std;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0) return false;
    return true;
}
bool kt(int x,int y)
{
    int k=0;
    for(int i=x; i<=y; i++)
        if(nt(i)==true)
            k=1;
    if(k==1)
        return true;
    else return false;
}
int n,m;
vector<int> c;
int main()
{
    cin>>n>>m;
    if(!kt(n,m))
        cout<<"NONE";
    else
    {
        for(int i=n; i<=m; i++)
            if(nt(i))
                c.push_back(i);
        for(auto x:c)
            cout<<x<<endl;
    }
    return 0;
}
