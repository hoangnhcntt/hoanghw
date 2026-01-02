#include <bits/stdc++.h>
using namespace std;
bool f[10000];
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
int n;
int main()
{
    int a,b;
    cin>>a>>b;
    sangera(b);
    int p=0;
    for(int i=a; i<=b; i++)
        if(f[i]==true)
        {
            cout<<i<<" ";
            p=1;
        }
    if(p==0)
        cout<<"NONE";
    return 0;
}
