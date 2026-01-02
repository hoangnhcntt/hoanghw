#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3;
bool kt(string s)
{
    string s4;
    s4=s;
    reverse(s4.begin(),s4.end());
    if(s4==s)
        return true;
    return false;
}
int main()
{
    freopen("MERGESTR.INP","r",stdin);
    freopen("MERGESTR.OUT","w",stdout);
    string m,n,p;
    cin>>s1>>s2>>s3;
    int rmax=0;
    if(kt(s1))
    {
        int a=s1.size();
        rmax=max(rmax,a);
    }
    if(kt(s2))
    {
        int b=s2.size();
        rmax=max(rmax,b);
    }
    if(kt(s3))
    {
        int c=s3.size();
        rmax=max(rmax,c);
    }
    if(kt(s1+s2))
    {
        m=s1+s2;
        int d=m.size();
        rmax=max(rmax,d);
    }
    if(kt(s1+s3))
    {
        n=s1+s3;
        int e=n.size();
        rmax=max(rmax,e);
    }
    if(kt(s2+s3))
    {
        p=s2+s3;
        int f=p.size();
        rmax=max(rmax,f);
    }
    if(rmax==m.size())
        cout<<s1+s2;
    if(rmax==n.size())
        cout<<s1+s3;
    if(rmax==p.size())
        cout<<s2+s3;
    if(rmax==s1.size())
        cout<<s1;
    if(rmax==s2.size())
        cout<<s2;
    if(rmax==s3.size())
        cout<<s3;
    return 0;
}
