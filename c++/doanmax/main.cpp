#include <bits/stdc++.h>
using namespace std;
int n,k,a[10000];
bool tong(int u,int v)
{
    int tong1;
    for(int i=u; i<=v; i++)
        tong1+=a[i];
    if(tong1>=k)
        return true;
    else
        return false;
}
void sub1(int x)
{
    int rmin;
    for(int i=1; i<=x; i++)
        for(int j=i+1; j<=x; j++)
            if(tong(i,j)==true)
                rmin=min(rmin,j-i+1);
    cout<<rmin;
}
void sub2(int x)
{
    int left = 0, sum = 0, minLength = INT_MAX;
    for (int right = 0; right < n; right++)
    {
        sum += a[right];
        while (sum >= k)
        {
            minLength = min(minLength, right - left + 1);
            sum -= a[left];
            left++;
        }
    }
    cout<<minLength;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    if(n<=1e3)
        sub1(n);
    else
        sub2(n);
    return 0;
}
