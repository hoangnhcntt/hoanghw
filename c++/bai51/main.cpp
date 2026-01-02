#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
          return false;
    return true;
}
int main()
{
    cin>>n;
    n+=1;
    while(!nt(n))
        n++;
    cout <<n;
    return 0;
}
