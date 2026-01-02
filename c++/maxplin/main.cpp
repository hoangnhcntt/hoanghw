#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
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
    string m,n,p,q,j,l,m1,n1,p1,q1,j1,l1;
    cin>>s1>>s2>>s3>>s4;
    int rmax=0;
    if(kt(s1+s2))
    {
        m=s1+s2;
        int d=stoi(m);
        rmax=max(rmax,d);
    }
    if(kt(s1+s3))
    {
        n=s1+s3;
        int e=stoi(n);
        rmax=max(rmax,e);
    }
    if(kt(s1+s4))
    {
        q=s1+s4;
        int g=stoi(q);
        rmax=max(rmax,g);
    }
    if(kt(s2+s3))
    {
        p=s2+s3;
        int f=stoi(p);
        rmax=max(rmax,f);
    }
    if(kt(s2+s4))
    {
        j=s2+s4;
        int k=stoi(j);
        rmax=max(rmax,k);
    }
    if(kt(s3+s4))
    {
        l=s3+s4;
        int k=stoi(l);
        rmax=max(rmax,k);
    }//hoang
    if(kt(s2+s1))
    {
        m1=s2+s1;
        int d=stoi(m1);
        rmax=max(rmax,d);
    }
    if(kt(s3+s1))
    {
        n1=s3+s1;
        int e=stoi(n1);
        rmax=max(rmax,e);
    }
    if(kt(s4+s1))
    {
        q1=s4+s1;
        int g=stoi(q1);
        rmax=max(rmax,g);
    }
    if(kt(s3+s2))
    {
        p1=s3+s2;
        int f=stoi(p1);
        rmax=max(rmax,f);
    }
    if(kt(s4+s2))
    {
        j1=s4+s2;
        int k=stoi(j1);
        rmax=max(rmax,k);
    }
    if(kt(s4+s3))
    {
        l1=s4+s3;
        int k=stoi(l1);
        rmax=max(rmax,k);
    }
    if(rmax!=0)
        cout<<rmax;
    else
        cout<<"NONE";
    return 0;
}
