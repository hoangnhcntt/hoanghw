#include <bits/stdc++.h>
using namespace std;
int n,a[100000],k,res=0;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        int q=k-a[i];
        if(binary_search(a+1+i,a+1+n,q)==true)
            res++;
    }
    cout <<res;
    return 0;
}
