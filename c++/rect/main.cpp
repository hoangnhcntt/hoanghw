#include <bits/stdc++.h>
using namespace std;
int k,l;
int main()
{
    while(cin>>k>>l)
    {
        for(int i=1; i<=l; i++)
            if(l%i%k==1)
            {
                cout<<i;
                break;
            }
        cout<<" "<<k+1;
    }
    return 0;
}
