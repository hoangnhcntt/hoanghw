#include <bits/stdc++.h>
using namespace std;
int a,b;
long long tong=0;
int main()
{
    freopen("SUMSEQ.INP","r",stdin);
    freopen("SUMSEQ.OUT","w",stdout);
    cin>>a>>b;
    tong=(1ll*(b-a+1)*(a+b))/2;
    cout <<tong;
    return 0;
}
