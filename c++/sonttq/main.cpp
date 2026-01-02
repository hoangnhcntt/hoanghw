#include <bits/stdc++.h>
using namespace std;
string n;
int k;
bool nt(char x)
{
    if(x == '2' || x == '3' || x == '5' || x == '7' )
        return true;
    return false;
}
int main()
{
    getline(cin,n);
    cin>>k;
    int a[10000],h;
    for(char x:n)
    {
        a[++h]=x;
    }
    sort(a+1,a+1+h);
    string p;
    for(int i=1; i<=h; i++)
    {
        if(a[i]!=a[i-1])
            p+=a[i];
    }
    if(p.size()<k)
        cout<<-1;
    else
    {
        if(nt(p[k-1])==true)
            cout<<p[k-1]<<" "<<"Yes";
        else
            cout<<p[k-1]<<" "<<"No";
    }
    return 0;
}
