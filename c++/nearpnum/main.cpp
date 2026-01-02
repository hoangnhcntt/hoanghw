#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
bool kt(int x)
{
    int sogoc=x;
    int sodao;
    while(x>0)
    {
        sodao*=10;
        sodao+=x%10;
        x/=10;
    }
    if(sodao==sogoc)
        return true;
    else
        return false;
}
int main()
{
    cin>>n;
    int p1=n-1;
    int p2=n+1;
    cout << "Hello world!" << endl;
    return 0;
}
