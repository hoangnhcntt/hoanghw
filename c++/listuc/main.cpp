#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
            if(i%2==0)
             cout<<i<<" ";
    }
    return 0;
}
