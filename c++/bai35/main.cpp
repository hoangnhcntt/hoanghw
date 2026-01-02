#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int i=1;
    double s;
    while(i<=n)
    {
        s+=1.0/(2*i-1);
        i++;
    }
    cout <<fixed<<setprecision(3)<<s;
    return 0;
}
