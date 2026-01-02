#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    double s=0;
    int i=1;
    while(i<=n)
    {
        s+=1.0/i;
        i++;
    }
    cout<<fixed<<setprecision(3)<<s;
    return 0;
}
