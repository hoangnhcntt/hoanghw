#include <bits/stdc++.h>
using namespace std;
int tongcs(int x)
{
    int tong=0;
    while(x>0)
    {
        tong+=x%10;
        x/=10;
    }
    return tong;
}
int main()
{
    int sl=0;
    int k,a,b;
    cin>>k>>a>>b;
    for(int i=a;i<=b;i++)
        if(tongcs(i)%k==0)
           sl++;
    cout <<sl;
    return 0;
}
