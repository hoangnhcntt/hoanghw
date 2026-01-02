#include <bits/stdc++.h>
using namespace std;
int n,x,y;
int main()
{
    cin>>n;
    for(int i=1; i<=sqrt(n); i++)
        if(n%(i*i)==0)
        {
            x=i;
            y=n/(i*i);
        }
    cout<<x<<" "<<y;
    return 0;
}
