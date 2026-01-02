#include <bits/stdc++.h>
using namespace std;
long long n,m,p;
int main()
{
    cin>>n>>m;
    n%=60;
    m%=60;
    p=n+m;
    while(p>=60)
    {
        p-=60;
    }
    cout <<p;
    return 0;
}
