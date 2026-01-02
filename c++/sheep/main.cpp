#include <bits/stdc++.h>
using namespace std;
int n;
long long x[1000000];
int res = 0;
void sub1()
{
    int l[1000000];
    memset(l, 1, sizeof(l));
    for(int i=1; i<=n; i++)
        l[x[i]]++;
    int mx = *max_element(x, x+n);
    for(int i=1; i<=mx; i++)
        if(l[i] == 1)
        {
            res = i;
            return;
        }
}
void sub2()
{
    sort(x, x+n);
    for(int i =1; i <= n; i++)
    {
        bool l  = (i == 0     || x[i] != x[i-1]);
        bool r = (i == n-1   || x[i] != x[i+1]);
        if(l==1 && r==1)
        {
            res = x[i];
            return;
        }
    }
}
int main()
{
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> x[i];
    if(n<1000000)sub1();
    else sub2();
    cout << res;
    return 0;
}
