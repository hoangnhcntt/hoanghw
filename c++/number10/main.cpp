#include <bits/stdc++.h>
using namespace std;
int n,a[10000],kt=0;
bool kt(string x)
{
    for(int i=0; i<=x.size()-1; i++)
        if(x[i] =='1' && x[i+1] =='0')
            return true;
    return false;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        string str1=to_string(a[i]);
        if(kt(str1)==true)
        {
            cout<<a[i]<<endl;
            kt=1;
        }
    }
    if(kt==0)
        cout<<-1;
    return 0;
}
