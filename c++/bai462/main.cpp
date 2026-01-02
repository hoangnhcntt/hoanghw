#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
bool f[100000];
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
    sangera(10000);
    for(int i=1; i<=sqrt(n); i++)
        if(n%i==0 && f[i])
        {
            c.push_back(i);
            if(i!=n/i && f[n/i])
                c.push_back(n/i);
        }
    sort(c.begin(),c.end());
    for(int x:c)
        cout<<x<<" ";
    return 0;
}
