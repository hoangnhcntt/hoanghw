#include <bits/stdc++.h>
using namespace std;
string s;
int sl=0;
int main()
{
    freopen("CKYTU.INP","r",stdin);
    freopen("CKYTU.OUT","w",stdout);
    cin>>s;
    int p=sqrt(s.size());
    int k=0;
    int m=p;
    for(int i=0; i<=s.size()-1; i++)
    {
        sl++;
        if(sl==m)
        {
            k+=int(s[i]);
            m+=p;
        }
    }
    cout << k;
    return 0;
}
