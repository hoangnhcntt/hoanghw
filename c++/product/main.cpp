#include <bits/stdc++.h>
using namespace std;
int l,r,sl=0;
bool kt(int x)
{
    int s=1,s1=x;
    while(x>0)
    {
        s*=x%10;
        x/=10;
    }
    if(s%s1==0)
        return true;
    return false;
}
int main()
{
    cin>>l>>r;
    for(int i=l; i<=r; i++)
        if(kt(i)==true)
            sl++;
    cout<<sl;
    return 0;
}
