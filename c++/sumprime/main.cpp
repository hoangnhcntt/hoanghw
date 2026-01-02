#include <bits/stdc++.h>
using namespace std;
int n;
long long tong=0;
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
int main()
{
    cin>>n;
    for(int i=2; i<=n; i++)
        if(f[i])
            tong+=i;
    cout<<tong;
    return 0;
}
