#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("BAI17.INP","r",stdin);
    freopen("BAI17.OUT","w",stdout);
    cin>>n;
    if(n%3==0 && n%5!=0)
        cout<<"True";
    else cout<<"False";
    return 0;
}
