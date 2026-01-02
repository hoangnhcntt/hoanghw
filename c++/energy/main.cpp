#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    long long tien=0;
    cin>>n;
    if(n<=50)
    {
        tien=n*1500;
        if(n<=30)
            tien-=10000;
    }
    if(n>50)
    {
        if(n<=100)
        {
            tien+=50*1500;
            tien+=(n-50)*2000;
        }
        else
        {
            tien+=50*1500;
            tien+=50*2000;
            tien+=(n-100)*3000;
        }
    }
    if(tien<0)
        cout<<0;
    else
        cout << tien;
    return 0;
}
