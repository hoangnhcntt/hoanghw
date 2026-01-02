#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> c;
void kk(int k,int m)
{
    if(k==0)
    {
        for(int i=c.size()-1;i>=0;i--)
            cout<<c[i]<<" ";
        cout<<endl;
        return;
    }

    for(int i=1; i<=min(k,m); i++)
    {
        c.push_back(i);
        kk(k-i,i);
        c.pop_back();
    }
}
int main()
{
    cin>>n;
    kk(n,n);
    return 0;
}
