#include <bits/stdc++.h>
using namespace std;
int n;
int tongcs(int x)
{
    int tong=0;
    while(x>0)
    {
        tong+=x%10;
        x/=10;
    }
    return tong;
}
int main()
{
    cin>>n;
    cout << tongcs(n);
    return 0;
}
