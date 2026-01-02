#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool kt(string s)
{
    string s5;
    s5=s;
    reverse(s5.begin(),s5.end());
    if(s5==s)
        return true;
    return false;
}
int main()
{
    string m,n,p,q,j,l,m1,n1,p1,q1,j1,l1;
    cin>>s1>>s2>>s3>>s4;
    int rmax=1e9;
    if(kt(s1+s2))
    {
        m=s1+s2;
        int d=stoi(m);
        rmax=min(rmax,d);
    }
    if(kt(s1+s3))
    {
        n=s1+s3;
        int e=stoi(n);
        rmax=min(rmax,e);
    }
    if(kt(s1+s4))
    {
        q=s1+s4;
        int g=stoi(q);
        rmax=min(rmax,g);
    }
    if(kt(s2+s3))
    {
        p=s2+s3;
        int f=stoi(p);
        rmax=min(rmax,f);
    }
    if(kt(s2+s4))
    {
        j=s2+s4;
        int k=stoi(j);
        rmax=min(rmax,k);
    }
    if(kt(s3+s4))
    {
        l=s3+s4;
        int k=stoi(l);
        rmax=min(rmax,k);
    }
    if(kt(s2+s1))
    {
        m1=s2+s1;
        int d=stoi(m1);
        rmax=min(rmax,d);
    }
    if(kt(s3+s1))
    {
        n1=s3+s1;
        int e=stoi(n1);
        rmax=min(rmax,e);
    }
    if(kt(s4+s1))
    {
        q1=s4+s1;
        int g=stoi(q1);
        rmax=min(rmax,g);
    }
    if(kt(s3+s2))
    {
        p1=s3+s2;
        int f=stoi(p1);
        rmax=min(rmax,f);
    }
    if(kt(s4+s2))
    {
        j1=s4+s2;
        int k=stoi(j1);
        rmax=min(rmax,k);
    }
    if(kt(s4+s3))
    {
        l1=s4+s3;
        int k=stoi(l1);
        rmax=min(rmax,k);
    }
    if(rmax!=0)
        cout<<rmax;
    else
        cout<<"NONE";
    return 0;
}
