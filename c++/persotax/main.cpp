#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    if(n<=5)
        cout<<5;
    else if(5<n && n<=10)
        cout<<5
    else if(10<n && n<=18)
        cout<<10;
    else if(18<n && n<=32)
        cout<<15;
    else if(32<n && n<=52)
        cout<<20;
    else if(52<n && n<=80)
        cout<<25;
    else if(n>80)
        cout<<30;
    return 0;
}
