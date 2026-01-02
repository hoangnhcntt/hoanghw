#include <bits/stdc++.h>
using namespace std;
int n;
bool f[10000];
void sangera(int u)
{
    memset(f,true,sizeof(f));
    int i=2;
    while(i<=sqrt(u))
        if(f[i]==true)
        {
            int k=2;
            while(i*k<=u)
            {
                f[i*k]=u;
                k++;
            }
            i++;
        }
        else i++;
}
int main()
{
    sangera(n);
    int p=0;
    cin>>n;
    for(int a=1;a<=n/2;a++)
        if(f[a] && f[n-a])
    {
        p=1;
        break;
    }
    if(p==0)
        cout<<"FAlSE";
    else
        cout<<"TRUE";
    return 0;
}
