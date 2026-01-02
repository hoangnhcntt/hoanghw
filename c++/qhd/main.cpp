#include <bits/stdc++.h>
using namespace std;
int ngt(int a, int tong)
{
    if (a == 0) return tong;
    return ngt(a - 1, tong * a);
}
int fibo(int a,int b,int sl)
{
    if(sl==0)return b;
    return fibo(b,a+b,sl-1);
}
int main()
{
    int n;
    cin>>n;
    cout << ngt(n, 1)<<endl;
    cout<<fibo(1,1,n-1);
    return 0;
}
