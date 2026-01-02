#include <bits/stdc++.h>
using namespace std;
int n;
bool f[1000000];
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
    sangera(100000);
    while(cin>>n)
        if(f[n])
            cout<<"adu"<<endl;
        else
            cout<<"tom ngu"<<endl;
    return 0;
}
