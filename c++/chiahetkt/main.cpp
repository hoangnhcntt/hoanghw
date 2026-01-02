#include <bits/stdc++.h>
using namespace std;
long long n,l,r;
int main()
{
    cin>>l>>r>>n;
    long long dem;
    dem = r/n-(l-1)/n;
    cout <<dem;
    return 0;
}
