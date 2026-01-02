#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return false;
    return true;
}
int main()
{
    cin>>n;
    if(nt(n)==true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
