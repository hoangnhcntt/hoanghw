#include <bits/stdc++.h>
using namespace std;
int n;
int tonguoc(int x)
{
    int tong=0;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0)
        {
            tong+=i;
            if(i!=x/i)
                tong+=x/i;
        }
    return tong;
}
int main()
{
    cin>>n;
    cout<<tonguoc(n);
    return 0;
}
