#include <bits/stdc++.h>
using namespace std;
int a,b;
bool f[10000000];
void sangera(int u)
{
    memset(f,true,sizeof(f));
    f[1]=false;
    int i=2;
    while(i<=sqrt(u))
        if(f[i]==true)
        {
            int k=2;
            while(i*k<=u)
            {
                f[i*k]=false;
                k++;
            }
            i++;
        }
        else i++;
}
int dp[100000];
int main()
{
    sangera(10000000);
    dp[1]=0;
    for(int i=2; i<=10000000; i++)
        dp[i]=dp[i-1]+f[i];
    while(cin>>a>>b)
    {
        int q=dp[b]-dp[a-1];
        if(q==0)
            cout<<"NONE"<<endl;
        else cout<<q<<endl;
    }
    return 0;
}
