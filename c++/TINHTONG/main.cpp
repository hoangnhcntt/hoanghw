#include <bits/stdc++.h>
using namespace std;
long long n,tong=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        tong+=2*i+1;
    }
    cout<<tong;
    return 0;
}
