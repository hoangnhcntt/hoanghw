#include <bits/stdc++.h>
using namespace std;
int k;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    cin>>k;
    if(nt(k))
        cout<<"True";
    else cout<<"False";
    return 0;
}
