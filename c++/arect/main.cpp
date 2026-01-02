#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d,e,f,rmax;
int main()
{
    cin>>a>>b>>c>>d>>e>>f;
    rmax=max(a*b,max(c*d,e*f));
    cout <<rmax;
    return 0;
}
