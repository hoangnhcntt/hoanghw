#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int i=2;
    int a[100000],k=0;
    cin>>n;
    while(n>0)
    {
        if(n%i==0)
        {
            a[++k]=n%i;
            n/=i;
            else
                i++;
        }
        for(int i=k; i>=1; i--)
            cout<<a[i];
        return 0;
    }
