#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    string str1=tostring(n);
    string str2=tostring(m);
    if(str1+str2>str2+str1)
        cout<<str1+str2;
    else
        cout<<str2+str1;
    return 0;
}
