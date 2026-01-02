#include <bits/stdc++.h>
using namespace std;
int s1,a[10000],b[10000];
bool kt(int x)
{
    for(int i=1;i<=x;i++)
        if(a[i]!=b[i])
         return false;
    return true;
}
int main()
{
    cin>>s1;
    for(int i=1; i<=s1; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    int sl=0;
    sort(a+1,a+1+s1);
    do
    {
        sl++;
        if(kt(s1)){
            cout<<sl;
            break;}
    }
    while(next_permutation(a+1,a+1+s1));
    return 0;
}
