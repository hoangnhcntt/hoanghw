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
bool kt(int x)
{
    int sogoc=x;
    int songuoc=0;
    while(x>0)
    {
        songuoc*=10;
        songuoc+=x%10;
        x/=10;
    }
    if(sogoc==songuoc)
        return true;
    else
        return false;
}
int n;
int main()
{
    int a,b;
    cin>>a>>b;
    sangera(b);
    int p=a;
    for(int i=a; i<=b; i++)
        if(f[i]==true)
        {
            if(kt(i)==true)
                cout<<i<<" ";
            p=1;
        }
    if(p==0)
        cout<<"NONE";
    return 0;
}
