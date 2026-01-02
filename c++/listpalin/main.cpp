#include <bits/stdc++.h>
using namespace std;
int a,b;
bool dx(int x)
{
    int sogoc=x;
    int sodao=0;
    while(x>0)
    {
        sodao*=10;
        sodao+=x%10;
        x/=10;
    }
    if(sogoc==sodao)
        return true;
    else
        return false;
}
int main()
{
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(dx(i)==true)
          cout<<i<<" ";
    return 0;
}
