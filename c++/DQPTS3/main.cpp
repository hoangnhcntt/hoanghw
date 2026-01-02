#include <bits/stdc++.h>
using namespace std;
int n,k;
int res=0;
vector<int> c;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
void kk(int k,int m)
{
    if(k==0)
    {
        if(res==c.size())
        {
            for(int i=c.size()-1; i>=0; i--)
            {
                if(c[i]==c[i-1])
                {
                    return;
                }
            }
            for(int i=c.size()-1; i>=0; i--)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
            return;
        }
    }
    for(int i=1; i<=min(k,m); i++)
    {
        if(nt(i))
        {
            c.push_back(i);
            kk(k-i,i);
            c.pop_back();
        }
    }
}
void kk1(int k,int m)
{
    if(k==0)
    {
        for(int i=c.size()-1; i>=0; i--)
        {
            if(c[i]==c[i-1])
            {
                return;
            }
        }
        int l=c.size();
        res=max(res,l);
        return;
    }

    for(int i=1; i<=min(k,m); i++)
    {
        if(nt(i))
        {
            c.push_back(i);
            kk1(k-i,i);
            c.pop_back();
        }
    }
}
int main()
{
    cin>>n;
    kk1(n,n);
    kk(n,n);
    return 0;
}
