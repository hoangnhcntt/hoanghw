#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    string f[1000000];
    f[1]="a";
    f[2]="b";
    for(int i=2; i<=n; i++)
        f[i]=f[i-1]+f[i-2];
    string s=f[n];
    int dema=0;
    for(int i=0;i<=s.size()-1;i++)
        if(s[i]=='a')
        dema++;
    cout<<dema<<" "<<s.size()-dema;
    return 0;
}
