#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    cin>>a>>b;
    long long j=((b*(b+1)*(2*b+1))/6)-((a*(a-1)*(2*a-1))/6);
    cout <<j;
    return 0;
}
