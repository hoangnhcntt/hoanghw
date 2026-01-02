#include <bits/stdc++.h>
using namespace std;
int a,b;
int sl=0;
int dao(int x)
{
    int sogoc=x;
    int sodao=0;
    while(x>0)
    {
        sodao*=10;
        sodao+=x%10;
        x/=10;
    }
    return sodao;
}
int main()
{
    cin>>a>>b;
    for(int i=a; i<=b; i++)
        if(__gcd(i,dao(i))==1)
            sl++;
    cout <<sl;
    return 0;
}
